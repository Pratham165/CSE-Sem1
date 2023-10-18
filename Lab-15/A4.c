#include<stdio.h>
void main(){
    int n;
    printf("enter no which user want to find");
    scanf("%d",&n);
    int a[5],b[5],i,c=0,o;
    for(i=0;i<5;i++){
        printf("Enter you num in arr[%d]",i);
        scanf("%d",&a[i]);
    }
     printf("enter no which user want to find");
    scanf("%d",&n);

    for(i=0;i<5;i++){
        if(a[i]==n){
            printf("Pos of element is %d\n",i);
            
        }
        else{
            c++;
        }

    }
   if(c==n){
    printf("No such element");
}
}