#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define size 6900

// Partition function to partition the array into two halves
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i + 1] and arr[high]
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Quick sort function
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array into two halves and get the partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort the sub-arrays
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
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
    quick_sort(b_arr, 0, size - 1);
    b_var2 = clock();

    printf("\nThe best case time complexity for the given array to sort using quick sort is: %d ms\n", b_var2 - b_var1);

    // Calculating the average_case i.e. array has random values in it
    int a_var1, a_var2;

    a_var1 = clock();
    quick_sort(a_arr, 0, size - 1);
    a_var2 = clock();

    printf("\nThe average time complexity for the given array to sort using quick sort is: %d ms\n", a_var2 - a_var1);

    // Calculating the worst_case i.e. array to be sorted is in the opposite order of the sorting
    int w_var1, w_var2;

    w_var1 = clock();
    quick_sort(w_arr, 0, size - 1);
    w_var2 = clock();

    printf("\nThe worst case time complexity for the given array to sort using quick sort is: %d ms\n", w_var2 - w_var1);

    return 0;
}
