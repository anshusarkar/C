#include <stdio.h>
#include<time.h>

int bubble_sort (int arr[] ,int count){
    for(int i=0 ; i<count ; i++){
        for(int j =0 ; j-i-1 ; j++){
            int temp ;
            if(arr[j]>arr[j+1]){
            temp = arr[i]  ;
            arr[i] = arr[j] ;
            arr[j+1] = temp ;
            }
            
        }
    }
    // printf("\nThe sorted array is : \n");
    //         for(int i=0 ; i<count ; i++){
    //             printf("%d\t" , arr[i]);
    //         }
}


int main() {
    int count = 10000 ;
    int arr [count] ;
    

    // arr[] =  ;
    // for (int i = 0 ; i < count ; i++){
    // printf("Enter a value :");
    // scanf("%d" , &arr[i]);
    // }
    // printf("The defualt array is : \n");
    // for(int i = 0 ; i< count ; i++){
    //     printf("%d\t" , arr[i] );
    // }


    int val1 ; int val2 ;

    for(int i =0 ; i<count ; i++){
        arr[i] = i ;
    }

    val1 = clock();
    bubble_sort(arr , count);
    val2 = clock();

    printf("\n The best case time complexity for the sorting is : %d ms \n" , val2 - val1);

    for(int i =0 ; i<count ; i++){
        arr[i] = rand() ;
    }

    val1 = clock();
    bubble_sort(arr , count);
    val2 = clock();

    printf("\nThe average case time complexity for the sorting is : %d ms \n" , val2 - val1);

    for(int i = count ; i>0 ; i--){
        arr[i] = i ;
    }
    val1 = clock();
    bubble_sort(arr , count);
    val2 = clock();

    printf("\n The worst case time complexity for the sorting is : %d ms \n" , val2 - val1);

    

    return 0;
}