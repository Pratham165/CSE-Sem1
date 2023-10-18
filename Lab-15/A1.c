#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int a[n],i,b[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element into a[%d]:",i);
        scanf("%d",&a[i]);

    }
    printf("The elements of array B are:\n");
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
         printf("%d\n",b[i]);
    }
}