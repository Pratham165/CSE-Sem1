#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    int arr[n],*ptr,i;
    for(i=0;i<n;i++)
    {
        printf("Enter elements in arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        ptr=&arr[i];
        printf("The combined elements in array are:%d",ptr);
    }


}