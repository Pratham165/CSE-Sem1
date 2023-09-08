#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter number a:");
	scanf("%f",&a);
	printf("Enter number b:");
	scanf("%f",&b);
	printf("Enter number c:");
	scanf("%f",&c);
	if(a>=b){
		if(a>=c){
			printf("a is greater than b & c",a);
		}
	}
	
		else if(b>=c){
			printf("b is greater than a & c",b);
		}
        else{
            printf("C is largest",c);

        }
		
		
	
}
