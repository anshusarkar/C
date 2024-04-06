#include<stdio.h>
int main () {

	int number ;
	printf("Enter an integer value : ");
	scanf("%d", &number);
	FILE *file; // As in C a FILE data type that would wirte into the memory address of the pointer I.e into the file's contex it's necessary to assign a pointer varriable to it . 
	file = fopen("File_with_an_integer_in_it.txt", "w");
	fprintf(file, "%d" , number);
	fclose(file);
	
	return 0 ;
}
