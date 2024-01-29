#include<stdio.h>
//ternary operator is an operator get's used to execute if else statement in one line
int main ()
{
    int i ;
    printf("Enter your age here _ ");
    scanf("%d" , &i );
    //Doing dession making using ternary operator
    //sintax : (condition) ? (code to be executed if condition is true) : (code to be executed if condition is false);
    (i>=18) ? printf("You can vote") : printf("You cann't vote");
    return 0 ;
}


