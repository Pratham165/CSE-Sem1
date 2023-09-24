#include<stdio.h>
void main()
{
    double a,b,c;
    int operator;
    printf("1=Addition,2=Subratraction,3=Multiplication,4=Division\n");
    printf("Select any operator from above:");
    scanf("%d",&operator);
    printf("Enter number a=");
    scanf("%lf",&a);
    printf("Enter another number b=");
    scanf("%lf",&b);
    switch(operator)
    {
        case 1:
        c=a+b;
        printf("Additon of numbers is:%lf",c);
        break;
        case 2:
        c=a-b;
        printf("Subtraction of numbers is:%lf",c);
        break;
        case 3:
        c=a*b;
        printf("Multiplication of numbers is:%lf",c);
        break;
        case 4:
        c=a/b;
        printf("Division of numbers is:%lf",c);
        break;
        default:
        printf("Not a valid operator");
    }
}
