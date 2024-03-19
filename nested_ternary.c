// A program to calculate the salary based on the books sold
// Uisng ternary i.e. one liner for if else statements
// try to generate the problem statement through under standing the statement 

#include<stdio.h>
int main ()


{
    int x ;
    printf("Enter the value of the books sold : ");
    scanf("%d" , &x);
    int sallary = (x!=90) ? ((x<90)? (4*x+100) : (4.5*x+150)) : 300 ; // Here 1st portion after '?' mark is the part - 
    printf("The salary would be : %d\n rps" , sallary );                                          // that would get executed if the statement beore '?', is true 
    return 0 ;                                                        // and the part after '?' is the part to be executed is the statement is false
}
