#include<stdio.h>
void main()
{
  int evensum=0,oddsum=0,i=1,n,sum=0;
  printf("Enter value of n:");
  scanf("%d",&n);
  while(i<=n)
  {
    if(i%2==0)
    {
        evensum=evensum+i;
    }
    else{
        oddsum=oddsum+i;
    }
    sum=oddsum-evensum;
  }
  printf("%d",sum);
}