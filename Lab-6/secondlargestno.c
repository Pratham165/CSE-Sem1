#include <stdio.h>

void main() {
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>=b && a>=c) {
        if (b>=c) {
            printf("The second largest number is: %d\n",b);
        } else {
            printf("The second largest number is: %d\n",c);
        }
    } else if (b>=a &&b>=c) {
        if (a>=c) {
            printf("The second largest number is: %d\n",a);
        } else {
            printf("The second largest number is: %d\n",c);
        }
    } else {
        if (a>=b) {
            printf("The second largest number is: %d\n",a);
        } else {
            printf("The second largest number is: %d\n",b);
        }
    }
}
