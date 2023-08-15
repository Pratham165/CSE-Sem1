#include<stdio.h>
int main()
{
	float s,h,m;
	printf("Input seconds:");
	scanf("%f",&s);
	h=s/3600;
	m=s/60;
	printf("Time is=%f,%f,%f",h,m,s);
	return 0;
	
}
