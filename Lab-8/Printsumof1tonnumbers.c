#include<stdio.h>
void main()
{
    int i=0,n,sum=0;
    printf("Enter the for required sum:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("%d",sum);
}