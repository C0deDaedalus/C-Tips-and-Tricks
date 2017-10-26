
// This is an Explanation file for the Source Code of Printing Hello World in C Language
// using printf() function but without using semi-colon.
// Getting printf() function to work without terminating the statement.


// Before we See how it Works, Let's see the concept behind it.
/* ========================================================================================
   
   Actually prototype of printf is -
                                   extern int printf (const char *__restrict __format, ...);
   
   You can view see in stdio.h , printf.h , features.h for an in-depth working of printf
   main thing to notice is that return type of printf() is int.
   The number that printf(...) returns is actually an integer representing number of characters printed.
   Remind you again " NUMBER OF CHARACTERS PRINTED "
   It counts characters as well as whitespaces & takes escape Sequences as 1.
   
   So printf("Hello\tWorld Bye!"); will return 16 . HOW ?
   
   Ans = Count it : H + e + l + l + o + \t + W + o + r + l + d + space + B + y + e + !
   
   Now what printf("Hello\t"+2); will return ?
   
   Ans = +3 after print statement represents that printing starts from 2nd character.
         But counting in C language starts from zero.
         Thus counting : H is 0 , e is 1 , l is 2 and so on till \t is 
         so, count it : l + l + o + \t = 4 characters
         Thus above printf() prints "llo" with a tab, Thus returns 4.
   
   Now, conditions in C language are evaluated to false on value = zero = 0
                                   & evaluated to true on value = Non-zero
                                   Non zero can be any integer, float or character except zero itself.
                                   
  So mixing these two concepts if(printf(...)) , while(printf(....))
     always works as long as there is string of atleast length = 1.
  
  ========================================================================================= */

#include<stdio.h>

// =================================== Using Macro Expansion =======================================
#define HELLO printf("in #define, Hello World\n"+12)    // defining a macro HELLO to printf(...)

// ===================================== Using Functions ===========================================
void hello(int a, int b, int c)
{
    // nothing here just checking return values.
    // printf("\n%d %d %d \n",a,b,c);
}

// Using Functions
void hellochar(char k)
{
    // nothing here just checking return values.
    // printf("\n\nASCII value is %d & character is %c\n\n",k,k);
}


// =============================== Using Command-Line Arguments to main() function ==================

int main(void *print[printf("Hello World in function passed as argument to main\n")])
{   
    
    // ========= Passing printf() directly (as a string) to Command-Line arguments in main() ========
    //
    //  printf(...) function can be directly passed as string to argv character pointer like this.
    // 
    //  int main(int argc, char *argv[printf("Hello World\n")]) {}
    // 
    //  argc & *argv are command-line arguments passed from a CLI to main() function.
    //  argc tells us number of arguments passed to main.
    //  argv is a pointer array that stores each command-line argument passed to main()
    //  *argv[0] = stores name of the program itself.
    //  *argv[1] = pointer to first command line argument.
    //  *argv[n] = last argument.
    
    
     // ================== Using void pointer in Command-Line arguments to main() ====================  
     
     int main(void *print[printf("Hello World in function passed as argument to main\n")])
     
     // a pointer of data type void. How It's possible.
     // It may be thought as integer pointer stores address of integer variables, the same way
        void pointer would store address of void variables that means unspecified type
        But that can't happen. If you think so, You're probably right, not fully !
     // A pointer variable declared of void type becomes a general purpose pointer variable
        ( also called GENERIC Pointer. )
        and can store address of any variable of any data type (int, float, char, etc.)
     
     // So, here printf(...) prints the Hello World & returns an integer to generic pointer
     // So it becomes void *print[integer].   
     
    
     // ================================== Using Declarations =========================================
    
    int z=printf("HelloWorld zzzzz. . . . \n");
    {
        // printf(...) prints "Hello World" and returns an integer.
        // here z=25.
        // here data type can be even float or char
        // In case of float value will be like z=25.00
        // In case of char value will be ASCII Character corresponding to number z=25.
    }
    
    char y=printf("HelloWorld yyyy. . . . \n");
    {
        // If you are pointing I used semi-colon, then you are misleaded
        // That semi-colon actually is to end decleration statement.
        // If you didn't like that, wait for the hellochar() function.
    }
    
    // ==================================== Using Functions ===========================================
    
    hello(printf("hello\n"),printf(" world "),printf("inside a function"));
    {
        // hello function is a void return type function.
        // It just gets integer values returned by printf(...) & assigns them to a,b,c
        // One intersting thing to note is that arguments are passed normally.
        // But STDOUT is reveresed . "inside a function" gets printed first then "world" then "hello"
        // next function call is a straight away.
    }
    
    hello(printf("inside a function\n"),printf(" world "),printf("hello"));
    {
        // Same as above
    }
    
    hellochar(printf("Hello World\n"));
    {
        // printf(...) returns integer passed to variable k using hellochar(...) function.
        // k in hellochar(...) function stores the ASCII value corresponding to number returned by printf(...)
    }
    
    // ================================== Using Conditional Operator =====================================
    
    int x;
    x=1?printf("Hello World in Conditional OPerator\n"):0;
    {
        // Ternery Conditional operator has syntax -
        //
        //     condition ? (statement If true) : (statement if false) ;
        //
        // Here x=1 is an assignment statement that's always true.
        // So condition returns true & printf(...) is executed.
    }
    
    // ======================== Using printf() function as a condition in If-else ========================
    
    if(!printf("Hello World inside If\n"))
    {
        // printf(...) returns 1 on succesful execution & prints Hello World
        // !printf(...) makes condition(disguised as printf statement) evaluated to false as !1 = 0
        // If block doesn't executes, still we get Hello World printed.
    }

    if(printf("Hello World inside If\n"))
    {
        // Here printf(...) returns 1 & prints Hello World
        // If-condition evaluates to true but nothing executes as If-block is empty
        // So, It doesn't matter if there are statements inside the block or not,
        // printf(...) executes well enough without semi-colon.
    }
    
    if(!printf("Hello ")) {}
    else if(printf("World in Else\n"))
    {
        // If-condition evaluates to false but "Hello " gets printed
        // "World" gets printed and else-if-condition evaluates to true.
        // But if-block as well as if-else-block, are both empty. So nothing more executes.
    }
    
    // ====================== Using MACRO expansion as a condition in If-else construct =====================
    
    if(HELLO)
    {
        // macro HELLO expands to printf("in #define, Hello World"+12)
        // printf(...) gets executed and returns length of string printed
        // if condition evaluates to true but executes nothing as if-block is empty.
    }
    
    // =================== Using printf() function as a condition in Looping Constructs =====================
    
    while(!printf("Hello world in While!\n"))
    {
        // Here again printf(...) returns 1 & prints Hello World
        // But due to !printf(...) condition evaluates to false & While Lop doesn't executes.
        // Condition evaluating to false is important.
        // Because If condition inside while evaluates to true. We have 2 things to consider
        // 1. Since While block is empty program won't do anything at all.
        // 2. True condition puts program into an INFINITE loop & will keep on printing Hello World again & again
        // Thus, It's necessary to evaluate loop condition to false in this trick
    }
    
    for(;!printf("Hello world in FOR Loop\n");)
    {
        // for loop without any initialization & increment/decrement statement.
        // condition !printf(...) evalutes to false as printf(...) evalutes to true by printing Hello World
        // No matter what is Looping construct, we have to make it false in first-run.
        // Otherwise our program will fall into an INFINITE Loop.
    }

    // Using printf() function inside switch constructs

    switch(printf("Hello World inside switch\n"))
    {
        // default: ;
        
        // printf(...) returns 1 to switch function.
        // switch(1) looks for case 1:
        // But Switch-block is empty so it goes to default case and executes nothing
        // Because default block has no statements to execute.
        // It doesn't matters at all if we put a default block or not, We get our work done.
    }
    
    return(0);
}
