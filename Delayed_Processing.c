//Execute in windows for abousute fun 
#include<stdio.h>
#include<time.h>
#include<unistd.h>
void func(){
	int i = 0 ;
	printf("Enter an integer value : ");
	scanf("%d" , &i);
	printf("\n\nSlow computer noises....");
	sleep(3);	
	printf("\n\numm....... ");
	sleep(3);
	printf("\n\nI am a slow computer");
	sleep(3);
	printf("\n\nwait a bit I am processing  "); 

    int  j ;
    for(j = 1 ; j<20 ; j++){
    	sleep(1);
    	if(j==10){
			printf("\n\n\t\tI need more ram !! Download some ASAP !");
			sleep(2);
    		printf("\n\nI will tell you what you have given as input but wait a bit more ");
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
	printf("\n\nThe execution time for the function was : %.3f sec - 15 secs os slowness.... \n\n  " , (var2 - var)/1000);

	//If done in windows processing time differs and "wating .." animation works as desired but why the dirrence even if the used compiler is same ?
	
	return 0;
}


