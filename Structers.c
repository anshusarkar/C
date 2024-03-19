#include<stdio.h>
int
main ()
{
  struct details
  {
	char na[100], t[100], ad[100], em[100], n[10]; // In c a structure is way of storing data with each data having thier own memory chunck
  };
  struct details d1; // This is an instance of the structure like an instance of a class 
  printf ("Enter the name here :\n ");
  scanf ("%s", d1.na);
  printf ("Enter the title here :\n ");
  scanf ("%s", d1.t);
  printf ("Enter the adress here :\n ");
  scanf ("%s", d1.ad);
  printf ("Eneter the email here :\n");
  scanf ("%s", d1.em);
  printf ("Enter your number here :\n");
  scanf ("%s", d1.n);

  printf
	("Your name is : %s\nyour tittle is : %s\nyou live here at : %s\nyour email is %s\nyour phonenumber is :%s\n",
	 d1.na, d1.t, d1.ad, d1.em, d1.n);
  return 0;

}
