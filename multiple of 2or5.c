#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	(a%5==0)(a%2==0)?printf("Number is multiple of both"):(a%5==0)?printf("Number is multiple of 5"):(a%2==0)?printf("The number is multiple of 2"):printf("Not multiple of either");
}
