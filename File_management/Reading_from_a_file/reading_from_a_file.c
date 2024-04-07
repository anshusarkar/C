#include<stdio.h>

int main () {

	FILE* file;
	char str[100];
	file = fopen("/home/anshu/Programing/C/File_management/Writing_in_a_file/File_with_a_string_in_it.txt" , "r"); // That's an absolute path so don't run on windows 
	printf("The Strings/strings written into the 'File_with_a_string_in_it.txt' is : ");						
	
	while(fgets(str, 100, file)){
		printf("%s", str);
	}
	return 0;
}
