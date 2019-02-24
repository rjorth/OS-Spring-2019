/* Rosalie Orth 
 */

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/mman.h>

int main ()

{
  int i; 
  srand(time(NULL)); 
  int random;
  int flag;
  random = rand() % 5; //random number between 0 and 4 inclusive
  srand(time(NULL));
  flag = rand() % 2;  //random number between 0 and 1 inclusive; 
  



  char *situation[5] = {
      "Student: The light is green", 
      "Student: There is a pedestrian ahead", 
      "Student: The car ahead of me is stopped", 
      "Student: The car in front of me is moving", 
      "Student: The road is turning right"};
  char *recommendation[3] = {
      "Teacher: Hit the breaks", 
      "Teacher: Hit the accelerator", 
      "Teacher: Steer Right"}; 
  char *action[4] = {
      "Student: Done",
      "Student: Oops, I hit the accelerator",
      "Student: Oops, I hit the breaks",
      "Student: Oops, I steered left"
  };

  int segment_id;
  char bogus;
  char* shared_memory;
  struct shmid_ds shmbuffer;
  int segment_size;
  const int shared_segment_size = 0x6400;

  /* Allocate a shared memory segment.  */
  segment_id = shmget (IPC_PRIVATE, shared_segment_size, IPC_CREAT | IPC_EXCL | S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
  /* Attach the shared memory segment.  */
  printf("Shared memory segment ID is %d\n", segment_id);
  shared_memory = (char*) shmat (segment_id, 0, 0);
  printf ("shared memory attached at address %p\n", shared_memory);
 
  /* Write a string to the shared memory segment.  */
  sprintf (shared_memory, "%s", situation[random]);
  /* Detach the shared memory segment.  */
  shmdt (shared_memory);



  pid_t child = fork(); 
  if (child == 0) {
    shared_memory = (char*) shmat(segment_id, (void*) 0x5000000,0); 
    printf("\n%s\n", shared_memory);
    shmdt(shared_memory); 

    //the light is green
    if (random == 0 || random == 3) {
        printf("%s\n", recommendation[1]);
        if (flag == 0) {
          printf("%s\n", action[0]);
          printf("What a good teacher I am!\n"); 
          
        }
        else {
          printf("%s\n", action[2]);
          printf("What a lousy teacher I am!\n");
          
        }
        exit(0); 
    }
    //car stopped
    else {
      if (random == 1 || random == 2) {
        printf("%s\n", recommendation[0]);
        if (flag == 0) {
          printf("%s\n", action[0]);
          printf("What a good teacher I am!\n"); 
          
        }
        else {
          printf("%s\n", action[1]);
          printf("What a lousy teacher I am!\n");
           
        }
      }
      //turning right 
      else {
        printf("%s\n", recommendation[2]); 
        if (flag == 0) {
          printf("%s\n", action[0]);
          printf("What a good teacher I am!\n");
          
        }
        else {
          printf("%s\n", action[3]);
          printf("What a lousy teacher I am!\n");
          
        } 
        
      }
      
    }
    exit(0); 
 

  }
  return 0; 
  
  }




