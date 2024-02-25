#include<stdio.h>
#include<time.h>
#include<stdlib.h> // for rand() function 
# define size 690000

int bubble_sort(int count, int arr[]){
    for(int i = 0 ; i<count ; i++){
        for(int j = 0 ; j<-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }

}

void main()
{
    int b_arr[size] ;
    int a_arr[size] ;
    int w_arr[size] ;

    for(int i = 0 ; i<size ; i++ ){
        b_arr[i] = i ;
    }
    
    for (int i = 0; i < size ; i++) {
        a_arr[i] = rand() ; // populates with ramdome values
    }

    for(int i = size ; i > 0 ; i--){
        w_arr[i] = i ;
    }


    // Calculating the best_case i.e. a sorted array

    int b_var1 ;
    int b_var2 ;
    
    b_var1 = clock();
    bubble_sort(size , b_arr);
    b_var2 = clock();

    printf("\nThe best case time complexity for the given array to sort using bubble sort is : %d ms\n" , b_var2 - b_var1);

    // Calculating the average_case i.e. array has randome values in it

    
    int a_var1 ;
    int a_var2 ;
    
    a_var1 = clock();
    bubble_sort(size , a_arr);
    a_var2 = clock();

    printf("\nThe average average time complexity for the given array to sort using bubble sort is : %d ms\n" , a_var2 - a_var1);


    // Calculating the wrost_case i.e. array to be sorted is in the opposite order of the sorting

    int w_var1 ;
    int w_var2 ;
    
    w_var1 = clock();
    bubble_sort(size , w_arr);
    w_var2 = clock();

    printf("\nThe wrost case time complexity for the given array to sort using bubble sort is : %d ms\n" , w_var2 - w_var1);



}