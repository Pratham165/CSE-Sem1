#include<stdio.h>
void main()
{
	int i,n,fac=1;
	printf("Enter a number to find factorial for:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("%d",fac);
}
