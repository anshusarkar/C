#include<stdio.h>
int main(){

	for(int i = 10 ; i>0 ; i--){
        
        for (int j = 10 ; j>i ; j--){
            printf("*");
        }
        
        for (int k = 0 ; k<i ; k++){
            printf(" ");
        }
        for (int x = 0 ; x<i ; x++){
            printf(" ");
        }
        for (int a = 10 ; a>i ; a--){
            printf("*");
        }
        
        printf("\n");
    }
	return 0 ;
}


