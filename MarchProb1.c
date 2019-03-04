/*Rosalie Orth 
This is messy, but basically passes the threads through a function.
Each thread is assigned a row/column to search 
The thread with the maximum letter count is returned
Only one max is allowed per row search
Only one max is allower per column search  */ 

#include <stdio.h> 
#include <pthread.h> 

void*
search(void* data)
{
    int true_max = 3; 
    int row_max; 
    int me = *((int*)data);

    if (me == 1) {

    int array[255] = {0}; // initialize all elements to 0

    char str[] = "TCLASQU";

    int i, max, index;

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
    if (max == true_max)
        printf("Row %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 2) {


    int array[255] = {0}; // initialize all elements to 0

    char str[] = "RLETTUS";

    int i, max, index;

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
    if (max == true_max)   
        printf("Row %d: %d occurences of the letter %c \n", me, max, str[index]);

}
else if (me == 3) {
    int array[255] = {0}; // initialize all elements to 0

    char str[] = "EATREES";

    int i, max, index;

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
    if (max == true_max) 
        printf("Row %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 4) {
    int array[255] = {0}; // initialize all elements to 0

    char str[] = "ESKATUT";

    int i, max, index;

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
    if (max == true_max) 
        printf("Row %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 5) {
    int array[255] = {0}; // initialize all elements to 0

    char str[] = "CSQUAEA";

    int i, max, index;

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
    if (max == true_max) 
        printf("Row %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 6) {
    int array[255] = {0}; // initialize all elements to 0

    char str[] = "ARRAYMC";

    int i, max, index;

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
    if (max == true_max) 
         printf("Row %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 7) {
    int array[255] = {0}; // initialize all elements to 0

    char str[] = "CRSQYVK";

    int i, max, index;

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
    if (max == true_max) 
        printf("Row %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 8) {
    int array[255] = {0}; // initialize all elements to 0

    char str[] = "TREECAC";
    me = 1; 

    int i, max, index;

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
    if (max == true_max) 
        printf("Column %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 9) {
    int array[255] = {0}; // initialize all elements to 0
    me = 2; 

    char str[] = "CLASSRR";

    int i, max, index;

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
    if (max == true_max) 
        printf("Column %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 10) {
    int array[255] = {0}; // initialize all elements to 0
    me = 3; 

    char str[] = "LETKQRS";

    int i, max, index;

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
    if (max == true_max) 
        printf("Column %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 11) {
    int array[255] = {0}; // initialize all elements to 0
    me = 4; 

    char str[] = "ATRAUAQ";

    int i, max, index;

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
    if (max == true_max) 
        printf("Column %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 12) {
    int array[255] = {0}; // initialize all elements to 0
    me = 5; 

    char str[] = "STETAYY";

    int i, max, index;

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
    if (max == true_max) 
        printf("Column %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 13) {
    int array[255] = {0}; // initialize all elements to 0
    me = 6; 

    char str[] = "QUEUEMV";

    int i, max, index;

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
    if (max == true_max) 
        printf("Column %d: %d occurences of the letter %c \n", me, max, str[index]);
}
else if (me == 14) {
    int array[255] = {0}; // initialize all elements to 0
    me = 7; 

    char str[] = "USSTACK";

    int i, max, index;

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
    if (max == true_max) 
        printf("Column %d: %d occurences of the letter %c \n", me, max, str[index]);
}

    /* terminate the thread */
    pthread_exit(NULL);
}

/* like any C program, program's execution begins in main */
int
main(int argc, char* argv[])
{
    int        thr_id;         /* thread ID for the newly created thread */
    pthread_t  p_thread;
    pthread_t  p2; 
    pthread_t  p3;
    pthread_t  p4;
    pthread_t  p5;
    pthread_t  p6;
    pthread_t  p7;
    pthread_t  p8;
    pthread_t  p9;
    pthread_t  p10;
    pthread_t  p11;
    pthread_t  p12;
    pthread_t  p13;
    pthread_t  p14;      /* thread's structure                     */
    int        r1        = 1;  /* row 1           */
    int        r2        = 2;
    int        r3        = 3;
    int        r4        = 4;
    int        r5         = 5;
    int        r6        = 6;
    int        r7        = 7;
    int        c1        = 8;
    int        c2        = 9;
    int        c3         = 10;
    int        c4         = 11;
    int        c5         = 12; 
    int        c6         = 13;
    int        c7         = 14;

    thr_id = pthread_create(&p_thread, NULL, search, (void*)&r1);
    pthread_create(&p_thread, NULL, search, (void*)&r3);
    pthread_create(&p_thread, NULL, search, (void*)&r4);
    pthread_create(&p_thread, NULL, search, (void*)&r5);
    pthread_create(&p_thread, NULL, search, (void*)&r6);
    pthread_create(&p_thread, NULL, search, (void*)&r7);
    pthread_create(&p_thread, NULL, search, (void*)&c1);
    pthread_create(&p_thread, NULL, search, (void*)&c2);
    pthread_create(&p_thread, NULL, search, (void*)&c3);
    pthread_create(&p_thread, NULL, search, (void*)&c4);
    pthread_create(&p_thread, NULL, search, (void*)&c5);
    pthread_create(&p_thread, NULL, search, (void*)&c6);
    pthread_create(&p_thread, NULL, search, (void*)&c7);

    /* run 'do_loop()' in the main thread as well */
    search((void*)&r2);
    
    /* NOT REACHED */
    return 0;
}
