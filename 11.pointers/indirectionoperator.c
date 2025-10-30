#include<stdio.h>

int main(){

   int i;

   int *p;

   p = &i;


   i = 1;

//    *p is an alias to i
// this means p is a pointer variable to i
// they both have samevalue of 1
   printf("%d\n", i);
   printf("%d\n", *p);

    return 0;
}