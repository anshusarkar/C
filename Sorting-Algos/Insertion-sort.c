#include<stdio.h>
#include<time.h>
#include<stdlib.h> // for rand() function 
#define size 6900

void insertion_sort(int count, int arr[]) {
    for (int i = 1; i < count; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements that are greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int b_arr[size];
    int a_arr[size];
    int w_arr[size];

    for (int i = 0; i < size; i++) {
        b_arr[i] = i;
    }

    for (int i = 0; i < size; i++) {
        a_arr[i] = rand(); // populates with random values
    }

    for (int i = size; i > 0; i--) {
        w_arr[i - 1] = i;
    }

    // Calculating the best_case i.e. a sorted array
    int b_var1, b_var2;

    b_var1 = clock();
    insertion_sort(size, b_arr);
    b_var2 = clock();

    printf("\nThe best case time complexity for the given array to sort using insertion sort is: %d ms\n", b_var2 - b_var1);

    // Calculating the average_case i.e. array has random values in it
    int a_var1, a_var2;

    a_var1 = clock();
    insertion_sort(size, a_arr);
    a_var2 = clock();

    printf("\nThe average time complexity for the given array to sort using insertion sort is: %d ms\n", a_var2 - a_var1);

    // Calculating the worst_case i.e. array to be sorted is in the opposite order of the sorting
    int w_var1, w_var2;

    w_var1 = clock();
    insertion_sort(size, w_arr);
    w_var2 = clock();

    printf("\nThe worst case time complexity for the given array to sort using insertion sort is: %d ms\n", w_var2 - w_var1);

    return 0;
}
