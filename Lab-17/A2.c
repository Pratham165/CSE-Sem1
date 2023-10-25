#include<stdio.h>
void main()
{
   int x=10; 
   float y=20;
   char z='P';
   double w=40;
   int *ptr=&x;
   float *ptr2=&y;
   char *ptr3=&z;
   double *ptr4=&w;
   printf("Value of ptr is %d\n",*ptr);
   printf("Address stored in ptr is %u\n",&x);
   printf("Value of ptr2 is %.2f\n",*ptr2);
   printf("Address stored in ptr2 is %u\n",&y);
   printf("Value of ptr3 is %c\n",*ptr3);
   printf("Address stored in ptr3 is %u\n",&z);
   printf("Value of ptr4 is %.2lf\n",*ptr4);
   printf("Address stored in ptr4 is %lu\n",&w);
}


    
