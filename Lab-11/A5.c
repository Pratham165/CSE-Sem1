#include<stdio.h>
void main()
{
    int i=1,n,fac=1;
    printf("Enter factorial number:");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("%d",fac);
}