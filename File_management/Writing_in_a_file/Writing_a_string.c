#include<stdio.h>
int main () {

    // Writing a string into the "File_man2.txt"
	char str[20];
	FILE *file;

	printf("Enter a string within 20 words :");
	fgets(str, 20, stdin);
	
	
	file = fopen("File_with_a_string_in_it.txt", "w");
	fprintf(file, "%s", str);
	fclose(file);
	
	
	return 0 ;
}
