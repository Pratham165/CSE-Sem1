#include<stdio.h>
void main()
{
    int x,y,z=1,i=1;
    printf("Enter value of base:");
    scanf("%d",&x);
    printf("Enter value of power:");
    scanf("%d",&y);
    if(y==0)
    {
        printf("Ans is 1");
    }
    while(i<=y)
    {
        z=z*x;
        i++;
    }
    printf("%d",z);
}