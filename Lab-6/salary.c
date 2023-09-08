#include<stdio.h>
void main()
{
	double bs,HRA,DA,grosssal;
	printf("Enter basic salary:");
	scanf("%lf",&bs);
	if(bs>=10000)
	{
		DA=bs*20/100;
		HRA=bs*80/100;
		grosssal=HRA+DA+bs;
		printf("%lf",grosssal);
	}
	else if(bs>=20000)
	{
		DA=bs*25/100;
		HRA=bs*90/100;
		grosssal=HRA+DA+bs;
		printf("%lf",grosssal);
	}
	else if(bs>=30000)
	{
		DA=bs*25/100;
		HRA=bs*95/100;
		grosssal=HRA+DA+bs;
		printf("%lf",grosssal);
	}
}
