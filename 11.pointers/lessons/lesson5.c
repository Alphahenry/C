//pointer addition
#include<stdio.h>

int main(){

   int a = 10;

   int *p = &a;
   
   p += 2;
   printf("p = %d\n", *p);


   //array manipulation using a pointer

   int b[7] = {2,55,78,9,22,45,67};

   int *g = &b[0];
   
   printf("g = %d\n", *g);
   g += 3;

   printf("g = %d\n", *g);









    return 0;
}