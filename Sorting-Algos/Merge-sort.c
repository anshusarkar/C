#include<stdio.h>
#include<time.h>
#include<stdlib.h> // for rand() function
#define size 6900

// Merge function to merge two halves of the array
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge sort function
void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        // Same as (left+right)/2, but avoids overflow for large left and right
        int middle = left + (right - left) / 2;

        // Sort first and second halves
        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);

        // Merge the sorted halves
        merge(arr, left, middle, right);
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
    merge_sort(b_arr, 0, size - 1);
    b_var2 = clock();

    printf("\nThe best case time complexity for the given array to sort using merge sort is: %d ms\n", b_var2 - b_var1);

    // Calculating the average_case i.e. array has random values in it
    int a_var1, a_var2;

    a_var1 = clock();
    merge_sort(a_arr, 0, size - 1);
    a_var2 = clock();

    printf("\nThe average time complexity for the given array to sort using merge sort is: %d ms\n", a_var2 - a_var1);

    // Calculating the worst_case i.e. array to be sorted is in the opposite order of the sorting
    int w_var1, w_var2;

    w_var1 = clock();
    merge_sort(w_arr, 0, size - 1);
    w_var2 = clock();

    printf("\nThe worst case time complexity for the given array to sort using merge sort is: %d ms\n", w_var2 - w_var1);

    return 0;
}
