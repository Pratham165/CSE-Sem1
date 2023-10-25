#include<stdio.h>
void main()
{
    int x=10,y=20,sum=0;
    int *ptr1=&x;
    int *ptr2=&y;
    sum = *ptr1+*ptr2;
    printf("The value of the pointer variable is %d\n",sum);
}