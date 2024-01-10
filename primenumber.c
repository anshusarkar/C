#include <stdio.h>

int main() {
    int i, num, flag = 0;

    printf("Enter a value here: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("%d is not a prime number!\n", num);
    } else {
        for (int j = 2; j <= num / 2; ++j) {
            if (num % j == 0) {
                flag = 1;
                break;  // exit the loop if a factor is found
            }
        }

        if (flag == 0) {
            printf("%d is a prime number!\n", num);
        } else {
            printf("%d is not a prime number!\n", num);
        }
    }

    return 0;
}
