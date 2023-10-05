#include<stdio.h>
void main(){
    int n,i=1,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            count=count+1;
        }
        i++;
    } 
    if(count==2)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is composite");
    }
}