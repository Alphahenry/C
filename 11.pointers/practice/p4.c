//double pointer

#include<stdio.h>

int main(){

   int a, *z;

   int **m;

   a = 10;
   z = &a;
   m = &z;


   printf("the value of a is: %d\n", **m);
   printf("another way of getting  value of a is: %d\n", *z);



    return 0;
}