#include<stdio.h>
void main()
{
    int i,j,cn=0,cp=0;
    int a[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter elements of array a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]>=0)
            {
                cp++;
                
                
            }
            else
            {
                cn++;
            }
        }
    }
    printf("The total positive number in matrix:%d\n",cp);
    printf("The total negative number in matirx:%d",cn);
}
