#include<stdio.h>
void main()
{
    char a,b;
    printf("Any character:");
    scanf("%c",&a);
    b=(a>='A'&& a<='Z'||a>='a'&& a<='z')?printf("Entered character is alphabet"):printf("Enter character is not an alphabet");
    printf("%c",b);
}