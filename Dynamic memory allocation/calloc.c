#include<stdio.h>
#include<stdlib.h>
int main ()
{
    //calloca stands for contigous memory allocation 
    
    int i , n ;
    printf("Enter the number of elements here : ");
    scanf("%d" ,&n );
    int* ptr ;
    ptr = (int*)calloc(n , sizeof(int));
    
    if(ptr==NULL){
         printf("The memory isn't assinged using calloc\n");}
    
    else {
        printf("Memory assinged %d times than before \n" , n );
        for (i=0 ; i<n ; i++){
            printf("Enter the %dno. element here _ " ,i+1 );
            scanf("%d" ,&ptr[i]);}
            printf("Assined inputs are _\n");
        for (i=0 ; i<n ; i++){
            printf("%d\t" , ptr[i] );}
        
        }
    return 0 ;
}

