#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,x,x1,x2;
    printf("Enter the value of A:");
    scanf("%f",&a);
    printf("Enter the Value Of B:");
    scanf("%f",&b);
    printf("Enter the Value Of C:");
    scanf("%f",&c);
    printf("\n");
  d=(b*b)-(4*a*c);
    if(a==0){
        x=-(b/c);
        printf("The roots for the equation are=%f",x);
    }
    else if(d>0){
        x1=(-b+sqrt(d))/2*a;
        x2=(-b-sqrt(d))/2*a;
        printf("The roots for the equation are=%f",x1);
        printf("The roots for the equation are=%f",x2);
    }
    else if(d<0)
    {
        printf("Equation has no real roots");
    }
}