#include<stdio.h>
#include<stdlib.h>
int main ()
{
  int i, j, n;
  int *ptr;
  printf ("Enter the number of element here :  ");
  scanf ("%d", &n);

  ptr = (int *) malloc (n * sizeof (int));	// "Pointer_name" = ("data_type*") malloc ("amount of memory to be incressed" sizeof(data_type));
  // Pointer_name = ptr
  // data_type*   = int
  // amount of memory to be incressed = n
  // data_type = int
  //Checking memory is assined or not using null pointer 
  //A pointer is called NULL pointer when the memory adress of the pointer == NULL

  if (ptr == NULL)
	{
	  printf ("Memory is not assined");
	}
  else
	{
	  printf ("Memory is assinged %d times more than before sucessfully\n",
			  n);

	  for (i = 0; i < n; i++)
		{
		  printf ("Enter the %dno. element ", i + 1);
		  scanf ("%d", &ptr[i]);
		}

	  for (i = 0; i < n; i++)
		{
		  printf ("%d\t", ptr[i]);
		}
	}

  return 0;

}
