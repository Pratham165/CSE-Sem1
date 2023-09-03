#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter val of a:");
	scanf("%d",&a);
	printf("enter val of b:");
	scanf("%d",&b);
	a=a+b,b=b+a,a=a-b;
	printf("%d %d",a,b);
}
