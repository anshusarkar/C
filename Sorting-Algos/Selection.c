#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 6900

// Selection sort function
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
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
    selection_sort(b_arr, size);
    b_var2 = clock();

    printf("\nThe best case time complexity for the given array to sort using selection sort is: %d ms\n", b_var2 - b_var1);

    // Calculating the average_case i.e. array has random values in it
    int a_var1, a_var2;

    a_var1 = clock();
    selection_sort(a_arr, size);
    a_var2 = clock();

    printf("\nThe average time complexity for the given array to sort using selection sort is: %d ms\n", a_var2 - a_var1);

    // Calculating the worst_case i.e. array to be sorted is in the opposite order of the sorting
    int w_var1, w_var2;

    w_var1 = clock();
    selection_sort(w_arr, size);
    w_var2 = clock();

    printf("\nThe worst case time complexity for the given array to sort using selection sort is: %d ms\n", w_var2 - w_var1);

    return 0;
}
