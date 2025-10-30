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


   //testing if p is a pointer variable to i

   *p = 2;

   printf("new value of i is : %d\n", i);
   printf("pointer variable value is: %d", *p);
    return 0;
}