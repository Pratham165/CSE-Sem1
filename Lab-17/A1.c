#include<stdio.h>
void main()
{
    int a[5]={10,20,17,9,8};
    int *ptr;
    ptr=a;
    char b[10]="Hello";
    char *ptr1=b;
    printf("%d\n",ptr1);
    ptr1=ptr1;
    printf("%s\n",ptr1);
    
}