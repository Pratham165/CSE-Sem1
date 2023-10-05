#include <stdio.h>

int main() {
    int i = 1;

    printf("Squares of integers from 1 through 10 using a while loop:\n");

    while (i <= 10) {
        int square = i * i;
        printf("%d^2 = %d\n", i, square);
        i++;
    }
}

