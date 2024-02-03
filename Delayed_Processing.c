#include<stdio.h>
#include<time.h>
#include<unistd.h>
void func(){
	int i = 0 ;
	printf("Enter a value : ");
	scanf("%d" , &i);
	
	printf("\n\numm....... ");
	sleep(3);
	printf("\n\nI am a slow computer");
	sleep(3);
	printf("\n\nwait a bit I am processing  "); 

    int  j ;
    for(j = 1 ; j<20 ; j++){
    	sleep(2);
    	if(j==10){
    		printf("\n\nI will tell you what you have givven as input but wait a bit more ");
		}
    	printf(".");

	}
	printf("\n\nDone !");
	sleep(3);
	printf("\n\nEntered value is %d" , i);
	
}


int main(){
	float var = clock();
	func();             
	float var2 = clock();	
	printf("\n\nThe execution time for the function was : %.3f sec" , (var2 - var)/1000);
	
	return 0;
}
