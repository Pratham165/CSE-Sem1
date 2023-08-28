#include<Stdio.h>
void main()
{
	float a,b;
	char operator;
	printf("Enter the operator:");
	scanf("%c",&operator);
	printf("Enter the num1:");
	scanf("%f",&a);
	printf("Enter num2:");
	scanf("%f",&b);
	if(operator=='+')
	{
		a+b;
		printf("%f",a+b);
	}
	
	else if(operator=='-')
	{
		a-b;
		printf("%f",a-b);
	}
	else if(operator=='*')
	{
		a*b;
		printf("%f",a*b);
	}
	else if(operator=='/')
	{
		if(b==0)
		{
		
		printf("Division is not possible");
	}
	
	 else
	{
		a/b;
		printf("%f",a/b);
	}
	}
	else
	{
		printf("Not a valid operator");
	}
}
