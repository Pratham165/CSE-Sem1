#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("Enter number 3:");
    scanf("%d",&c);
    d=(a>b)?a*c:b*c;
    printf("%d",d);

}