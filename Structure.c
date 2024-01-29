#include<stdio.h>
int main ()
{
 struct details {
 char na[100] , t[100] , ad[100] , em[100] , n[10] ;
 };
 struct details d1 ;
 printf("Enter the name here _\n ");
 scanf("%s" , d1.na);
 printf("Enter the title here _\n ");
 scanf("%s" , d1.t);
 printf("Enter the adress here _ \n ");
 scanf("%s" , d1.ad);
 printf("Eneter the email here _ \n");
 scanf("%s" , d1.em);
 printf("Enter your number here _ \n");
 scanf("%s" , d1.n);
 
 printf("Your name is : %s, your tittle is : %s, you live here : %s, your email is %s, your phonenumber is :%s ,",d1.na,d1.t,d1.ad,d1.em,d1.n);
 return 0;
    
}


