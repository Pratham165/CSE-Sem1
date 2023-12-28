#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number to check:");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
		printf("the number is not a prime number");
		return;
		}
		
	}
	printf("The number is a prime number");

	
}
