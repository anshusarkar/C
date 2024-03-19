#include<stdio.h>
union book
{
  char name[25];
  int num_of_page;
  
};                                      // In C an union is a way of storing data i.e. a data structure in which
                                       // data get's sotred in the same memory chuck unlike structure
                                      // Though it's not ok to store multiple data types in an union it can be done
                                     // however as it would use the same memory chuck it would case the reinatilazation of same memory chunk with diffrent data types 

// Practical use case for uion would be to make custom data type

union Voltage
{
    float v ; // Here Volatage is an unit that has a decimal of float value in it

}volt1,volt2 ; // Instances of unio Volatage is volt1,volt2 as unit of the Voltage is volt !

// Another example

union Distace 
{
    int d ;

}km;

union Time
{
    float t ;   

}minu;



int main ()
{
  union book b ; // Initiating an object of book union 
  
  b.num_of_page = 100 ;

  printf("The number of the pages present in the book is : %d\n",b.num_of_page);

  // Now if the value of the name is to be assinged in the union 
  // it would cause the reinatialaization of the same memory chunk
    
  snprintf(b.name, sizeof(b.name), "%s", "Gitanjali"); // This a special function that takes input in the b.name // offcourse givven by chat-gpt

  // union book's value now has been reinitialized from int to char

  printf("\nThe name of the book is : %s\n", b.name);


  volt1.v = 5 ; // That states "The voltage present in the point V1 is 5 though that dosen't mean I am controlling the voltage for the computer like that lol."
  volt2.v = 1 ;

  printf("\nThe voltage diffrence between V1 and V2 point is : %.2f\n",(volt1.v - volt2.v)); // Would print upto tow decimal places

  km.d = 15 ;
  minu.t = 30 ;

  printf("\nThe time takkeen to cover distance %d km is %.2f minutes which means the speed was %.2f km per min \n",km.d,minu.t, ( km.d/minu.t ));

  return 0;


}
