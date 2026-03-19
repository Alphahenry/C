//using float

#include<stdio.h>

int main(){

   float a = 28, b= 34;

   float *g, *s, *p;

   g = &a;
    
   s = g;

   p = s;//

   printf("The value of  s is: %.2f", *s);
   printf("The value of p is: %.2f", *p);


    return 0;
}