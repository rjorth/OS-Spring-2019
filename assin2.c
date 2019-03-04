/*Rosalie Orth
*/ 

#include <stdio.h>
#include <pthread.h> 


void*
search(void* data)
{


    

int array[255] = {0}; // initialize all elements to 0

int me = *((int*)data);

if (me == 1) {
    


    int i, max, index;
    char str[] = "xxxxx"; 

    for(i = 0; str[i] != 0; i++)
    {
       ++array[str[i]];
    }


    // Find the letter that was used the most
    max = array[0];
    index = 0;
    for(i = 0; str[i] != 0; i++)
    {
         if( array[str[i]] > max)
         {
             max = array[str[i]];
             index = i;
         }
    }

    printf("Column X: %d occurences of the letter %c \n", max, str[index]);
}
else {
    


    int i, max, index;
    char str[] = "xxxxx"; 

    for(i = 0; str[i] != 0; i++)
    {
       ++array[str[i]];
    }


    // Find the letter that was used the most
    max = array[0];
    index = 0;
    for(i = 0; str[i] != 0; i++)
    {
         if( array[str[i]] > max)
         {
             max = array[str[i]];
             index = i;
         }
    }

    printf("Row X: %d occurences of the letter %c \n", max, str[index]);


}



    /* terminate the thread */
    pthread_exit(NULL);
}


/* p thread creation */
int
main(int argc, char* argv[])
{
    int        thr_id;         /* thread ID */
    pthread_t  p_thread;       
    int        a         = 1;  /* thread 1 identifying number            */
    int        b         = 2; /* cols           */

    /* create a new thread that will execute search */
    thr_id = pthread_create(&p_thread, NULL, search, &a);
    /* run search in the main thread as well */
    search((void*)&b);
    
    /* NOT REACHED */
    return 0;
}