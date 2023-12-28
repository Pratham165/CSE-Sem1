#include<stdio.h>
void main()
{
	int n,rev=0,rem;
	printf("Enter a number to be reversed:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	printf("reverse num=%d",rev);
}
