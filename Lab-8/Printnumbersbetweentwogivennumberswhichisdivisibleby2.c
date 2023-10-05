#include<stdio.h>
void main()
{
	int a,i=0,count1=0,count2=0;
	scanf("%d",&a);
	while(i<10)
	{
			i=i+1;
		if(a%2==0)
		{
			count1=count1+1;
		}
		else
		{
				count2=count2+1;
		}
		scanf("%d",&a);
	}
	printf("%d",count1);
	printf("%d",count2);
}
