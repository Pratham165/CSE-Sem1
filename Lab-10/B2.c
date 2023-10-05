#include<stdio.h>
void main()
{
    int n,i=1,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2){
        printf("\nThe given number is a prime");}else{
            printf("\n The given number isn't a prime ");
    }
}