#include <stdio.h>

void main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n", number);

}
