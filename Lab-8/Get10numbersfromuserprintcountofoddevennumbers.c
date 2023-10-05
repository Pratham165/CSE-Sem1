#include<stdio.h>
void main()
{
    int n,i=1;
    while(i<=9)
    {
        printf("Enter number :");
        scanf("%d",&n);
        i++;
    }
        if(n%2==0)
        {
            printf("Even numbers are=%d",n);
        }
        else{
            printf("Odd numbers are=%d",n);
        }
    
}