#include<stdio.h>
void main()
{
	int i,m,n,sum=0,sn,sm;
	printf("Enter a number to find sum from:");
	scanf("%d",&m);
	printf("Enter the last number for sum:");
	scanf("%d",&n);
	sm=(m*(m+1))/2;
	sn=(n*(n+1))/2;
	sum=(sn-sm)+m;
	printf("%d",sum);
}
