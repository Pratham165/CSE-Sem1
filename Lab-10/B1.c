#include<stdio.h>
void main()
{
    int n,i=1,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==n){
        printf("\nThe given no is perfect number.");}else{
            printf("The given no is not a perfect number.");
    }
}