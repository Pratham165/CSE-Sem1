#include<stdio.h>
int main()
{
	int d,y,w;
	printf("Input days:");
	scanf("%d",&d);
	y=d/365;
	w=d/7;
	printf("Yearly format=%d,%d,%d",y,w,d);
	return 0;
	
}
