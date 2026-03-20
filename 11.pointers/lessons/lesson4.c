//double pointer

#include<stdio.h>

int main(){

   int b = 34, c = 88;

   int *p;

   p = &b;

   int **q = &p;

   printf("Value of p is = %d\n", *p);
   printf("The value of q is = %d\n", **q);





    return 0;
}