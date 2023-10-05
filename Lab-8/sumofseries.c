#include <stdio.h>

void main() {
    int n, term = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Sum of the series 1 + 4 + 9 + 16 + ... + %d:\n", n);

    while (term <= n) {
        sum += term;
        printf("%d", term);

        if (term < n) {
            printf(" + ");
        } else {
            printf(" = %d\n", sum);
        }

        term = (term + 1) * (term + 1); 
    }
}
