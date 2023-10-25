#include<stdio.h>
void main()
{
    int x,y,*ptr1,*ptr2,*ptr3;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of y:");
    scanf("%d",&y);
    ptr1=&x;
    ptr2=&y;
    *ptr3=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;
    printf("\nValue after swapping:\nx=%d\ny=%d",x,y);

}