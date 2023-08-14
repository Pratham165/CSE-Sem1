#include<stdio.h>
int main()
{
	int h,b,A;
	printf("Enter height of triangle:");
	scanf("%d",&h);
	printf("Enter base of triangle:");
	scanf("%d",&b);
	A=(h*b)/2;
	printf("Area=%d",A);
	return 0;
}
