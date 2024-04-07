#include <stdio.h>  // That's called a preprocessor directive 
#define NUMBER -2 // That's called a macro 
#define m main // That's a macro of main function :)
int m () {
    
#if (NUMBER>0)  // These are called a conditional directive 
printf("Value of Number greater than 0 is: %d",NUMBER);
#elif (NUMBER>1) 
printf("Value of Number less than 1 is: %d",NUMBER);
#else
printf("Value of Number less than 0 is: %d\n",NUMBER);
// #endif is used to determine the end the if condition.
#endif    // All condiotional directives must end with #endif     
    return 0;
}