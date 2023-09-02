#include<stdio.h>
int main()
{
	float p,r,n,I;
	printf("Enter principal amount:");
	scanf("%f",&p);
	printf("Enter rate of interest:");
	scanf("%f",&r);
	printf("Enter time period:");
	scanf("%f",&n);
	I=(p*r*n)/100;
	printf("I=%f",I);
	return 0;
	
}
