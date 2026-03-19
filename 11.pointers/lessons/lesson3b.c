//using float

#include<stdio.h>

int main(){

   float a = 28, b= 34;

   float *g, *s, *p, *r;

   g = &a;
    
   s = g;

   p = s;

   printf("The value of  s is: %.2f\n", *s);
   printf("The value of p is: %.2f\n", *p);

   //avoiding segfault
    r = &a;

    *r = *g;

    printf("Value of r is: %f\n", *r);


    return 0;
}