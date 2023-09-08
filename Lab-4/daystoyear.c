#include<stdio.h>
void main()
{
	int days,y,w,ry,rw;
	printf("Enter days:");
	scanf("%d",&days);
	y=days/365;
	ry=days%365;
	w=ry/7;
	rw=ry%7;
	printf("year=%d,week=%d,days=%d",y,w,rw);
}
