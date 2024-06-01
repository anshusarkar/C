#include <stdio.h>

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int limit;

    printf("Enter the limit (Don't give more than 39 the program would be puted into a partial pause state): ");
    scanf("%d", &limit);

    printf("Fibonacci Series: ");

    for (int i = 0; i < limit; i++) {
        long fibnum = fibonacci(i);
        if (fibnum < 0) {
            printf("\nThis is the limit! After this, the program starts printing negative numbers!");
            printf("\nThe program stopped at %d\n", i);
            break;
        }
        printf("%ld", fibnum);
        if (i < limit - 1) {
            printf(", ");
        }
    }

    printf("\nYeah! Now that's a golden ratio!\n");
    printf("Cause any number of the sequence if divided by the previous number is 1.67 except for the first three numbers of the sequence!\n");
    printf("FYI: Golden ratio is the Fibonacci sequence!\n");

    return 0;
}
