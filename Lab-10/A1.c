#include<stdio.h>
void main()
{
    int n,last,first,sum;
    printf("Enter the first number:");
    scanf("%d",&n);
    last=n%10;
    while(n>=10){
        n=n/10;
    }
    first=n;
    sum=first+last;
    printf("%d",sum);
}

