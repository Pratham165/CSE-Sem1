#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        n*i;
        printf("%d\n",n*i);
    }
}