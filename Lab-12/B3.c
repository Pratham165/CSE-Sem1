
#include<stdio.h>

void main()
{
    int i, j, n;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= (n - 2 * i - 2); j++)
        {
            printf(" ");
        }

        int c = 1;

        for(j = 0; j <= i; j++)
        {
            printf("%d ", c);
            c = c * (i - j) / (j + 1);
        }

        printf("\n");
    }
}