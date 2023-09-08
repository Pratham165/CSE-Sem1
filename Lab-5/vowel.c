#include<stdio.h>
void main()
{
	char c;
	printf("Enter any alphabet:");
	scanf("%c",&c);
	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	{
		printf("Alphabet is vowel");
	}
	else{
		printf("Alphabet is consonant");
	}
	
}
