#include<stdio.h>
int
main ()
{
  int i, j, k, n;
  printf ("Enter the value here _ ");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
	{
	  printf ("\n");
	  for (j = i; j < n; j++)
		{
		  printf ("* ");
		}
	}
  return 0;
}

