#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 6900

// Shell sort function
void shell_sort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
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
    shell_sort(b_arr, size);
    b_var2 = clock();

    printf("\nThe best case time complexity for the given array to sort using shell sort is: %d ms\n", b_var2 - b_var1);

    // Calculating the average_case i.e. array has random values in it
    int a_var1, a_var2;

    a_var1 = clock();
    shell_sort(a_arr, size);
    a_var2 = clock();

    printf("\nThe average time complexity for the given array to sort using shell sort is: %d ms\n", a_var2 - a_var1);

    // Calculating the worst_case i.e. array to be sorted is in the opposite order of the sorting
    int w_var1, w_var2;

    w_var1 = clock();
    shell_sort(w_arr, size);
    w_var2 = clock();

    printf("\nThe worst case time complexity for the given array to sort using shell sort is: %d ms\n", w_var2 - w_var1);

    return 0;
}
