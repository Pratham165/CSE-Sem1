#include<stdio.h>
void main()
{
	char character;
	printf("Enter character:");
	scanf("%c",&character);
	if(character>='a'&& character<='z')
	{
		printf("The entered character is lower case");
	}
	else if(character>='A'&& character<='Z')
	{
		printf("The entered character is Upper case");
	}
	else if(character>='0'&& character<='9')
	{
		printf("The entered character is a digit");
	}
	else
	{
		printf("The entered character is a special one");
	}
}
