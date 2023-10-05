#include<stdio.h>
void main()
{
 int n,i=1,sum=0,avg;
 printf("Enter number n:");
 while(1)
 {
   printf("Enter number n:");
    scanf("%d",&n);
    if(n==0){
        break;
    }
    sum=sum+n;
    i++;
    
 }
 i=i-1;
 avg=sum/i;
 printf("sum=%d",sum);
 printf("Avg=%d",avg);
    
}