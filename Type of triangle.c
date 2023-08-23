#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter angle 1:");
	scanf("%f",&a);
	printf("Enter angle 2:");
	scanf("%f",&b);
	printf("Enter angle 3:");
	scanf("%f",&c);
	if(a==b && b==c)
	{
		printf("The triangle is equilateral");
	}
	else if(a==b||b==c||c==a)
		{
			printf("Triangle is isosceles");
		}
		else
		{
			printf("Triangle is scalene");
		}
	
	
	
}
