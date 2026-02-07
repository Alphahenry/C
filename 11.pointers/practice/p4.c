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

 int ***s = &m;
   printf("Value of a through pointer s is = %d", ***s);

   //changing value of a through pointer s
   ***s = 25;
   printf("New value of a is = %d ", **m);

    return 0;
}