#include<stdio.h>
void main()
{
    int i=101,n=199;
    while(i<=199)
    {
        if(i%7==0 && i%5!=0)
        {
            printf("The numbers are:%d\n",i);
        }
        i++;
    }
}