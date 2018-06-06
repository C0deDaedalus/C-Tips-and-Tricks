

// Generating Totally Random Numbers Using Time values as seed and rand() & srand() functions.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int x,i;
                // Will be using time to create randomness.
    time_t t1;  // time_t ( time type variable ) is used to store calendar time.
    clock_t t2; // clock_t ( time type   variable ) is used to store processor time.
    
    // int rand(void) function [ defined in stdlib.h ] is used to get random numbers.
    
    /* It returns a pseudo-random number in the range of 0 to RAND_MAX.
       value of RAND_MAX depends upon implementations but It's MIN value = 32767
       It can be as large as a 10-digit decimal integer.                            */
    
    printf("\nGenerating Random Numbers\n\t");
    for(i=0;i<10;i++)
        printf("%d\t",rand());
    
    /* No matter how many times program is run, you will see the same random numbers.
       The output from rand is pseudo-random, which means that it looks effectively random,
       but is computed the same way each time, starting from a special value called the seed.
       With the same seed value, you get the same sequence of random numbers.                   */
    
    printf("\n\nGenerating 3 digit random numbers\n\t");
    for(;i<20;i++)
        printf("%d\t",rand()%1000);
    
    printf("\n\nGenerating random multiples of 5\n\t");
    for(;i<30;i++)
    {   x=rand()%5;
        printf("%d\t",x?x*5:5);
    }
    
    
    /* A variable that helps to generate TRUE randomness is called seed
       If no seed value is provided, the rand() function is automatically seeded with a value of 1.
       and Changing it to some other constant value say seed = 6, will not generate Random Numbers.
       It's very much same as seed = 1 no difference at all.                                          */
    
    // C library function void srand(unsigned int seed) seeds random number generator used by function rand().
    
    // We need a value that changes for every execution of program. & that is TIME
    // Initializing this srand() once & then providing time as seed will generate TRUE random numbers.
    printf("\n\n--------------------------------------------------------------------------------\n");
    // Thus, srand() sets the seed used by rand() to generate "random" numbers. If you don't
    // call srand() before your first call to rand(), it's like calling srand(1) to set the seed = 1.
    
    printf("\nInitializing srand() function & Using Time as seed");
    srand(time(NULL));
    
    // The problem with time(NULL) is that it returns the same value at the same second.
    // So, if you call your program twice at 11:35:17 of same day you will get same pseudo random numbers.
    
    printf("\n\nGenerating Random Numbers\n\t");
    for(i=0;i<10;i++)
        printf("%d\t",rand());
    
    printf("\n\nGenerating 3 digit random numbers\n\t");
    for(;i<20;i++)
        printf("%d\t",rand()%1000);
    
    printf("\n\nGenerating 30 Random Numbers from 1 to 4\n\t");
    for(i=0;i<30;i++)
        printf("%d\t",rand()%4+1);

    /*
        Note: The pseudo-random number generator should only be seeded once, before any calls to rand(),
        and the start of program. It should not be repeatedly seeded, or reseeded every time you wish to
        generate a new batch of pseudo-random numbers.
    
        Other Ways to provide seed to srand() function.
        ------------------------------------------------
        srand(time(0));
    
        srand(time(NULL));      // NULL is a macro that stores the value of a null pointer constant.

        srand((unsigned int) time(0) + getpid());
    */
    
    printf("\n\n");
    return 0;
    
}
