#include<stdio.h>
void main()
{
    int i=1,n,multi;
    printf("Enter value of n:");
    scanf("%d",&n);
    while(i<=10)
    {
        multi=n*i;
        printf("%d\n",multi);
        i++;
        
    }
}