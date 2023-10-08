#include<stdio.h>

void main() {
    int n;
    printf("Enter value of n greater than 5:");
    scanf("%d",&n);
    double e = 1.0;
    double factorial = 1.0; 

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.0 / factorial; 
    }
    printf("Estimated value of e with %d terms: %lf\n", n, e);
}