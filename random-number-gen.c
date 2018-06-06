
// Generating Totally Random Numbers Using Time values as seed and rand() & srand() functions.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int x,i;
    time_t t1;
    clock_t t2;

    printf("\nGenerating Random Numbers\n\t");
    for(i=0;i<10;i++)
        printf("%d\t",rand());
 
    printf("\n\nGenerating 3 digit random numbers\n\t");
    for(;i<20;i++)
        printf("%d\t",rand()%1000);
    
    printf("\n\nGenerating random multiples of 5\n\t");
    for(;i<30;i++)
    {   x=rand()%5;
        printf("%d\t",x?x*5:5);
    }
    
    printf("\nInitializing srand() function & Using Time as seed");
    srand(time(NULL));
    
    printf("\n\nGenerating Random Numbers\n\t");
    for(i=0;i<10;i++)
        printf("%d\t",rand());
        
    printf("\n\nGenerating 3 digit random numbers\n\t");
    for(;i<20;i++)
        printf("%d\t",rand()%1000);
    
    printf("\n\nGenerating 30 Random Numbers from 1 to 4\n\t");
    for(i=0;i<30;i++)
        printf("%d\t",rand()%4+1);

    printf("\n\n");
    return 0;
    
}
