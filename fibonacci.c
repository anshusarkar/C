#include <stdio.h>

int main() {
    printf("Enter the limit (Don't give more than 48; the program would be printing negative numbers): ");
    int inp;
    scanf("%d", &inp);
    
    int prevar = 0;
    int nextvar = 1;
    printf("%d,", prevar);
    
    for (int i = 3; i < inp; ++i) {
        long fibnum = prevar + nextvar;
        if (fibnum > 0) {
            printf("%ld,", fibnum);
        } else {
            printf("\nThis is the limit! After this, the program starts printing negative numbers!");
            int var = i;
            printf("\nThe program stopped at %d", var);
            break;
        }
        
        prevar = nextvar;
        nextvar = fibnum;
    }
    
    printf("\nYeah! Now that's a golden ratio!\n");
    printf("Cause any number of the sequence if divided by the previous number is 1.67 except for the first three numbers of the sequence!\n");
    printf("FYI: Golden ratio is the Fibonacci sequence!\n");
    
    return 0;
}
