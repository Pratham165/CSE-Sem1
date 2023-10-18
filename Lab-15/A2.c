#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int a[n],i,count=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter element into a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<0){
            count++;
        }
    }
    printf("\nNumber of negative numbers=%d\n",count);
}   