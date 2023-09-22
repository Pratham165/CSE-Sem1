#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    int lastDigit = num % 10;

    if (lastDigit % 2 == 0) {
        printf("The last digit (%d) is even.\n", lastDigit);
    } else {
        printf("The last digit (%d) is odd.\n", lastDigit);
    }

    return 0;
}
