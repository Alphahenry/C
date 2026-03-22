//pointer substraction
#include<stdio.h>


int main(){

   int a[] = {0,1,-1,10,11,3};

   int *p, *q;
   p = &a[0];
   q = &a[4];
   
   int diff = q -p;
  

   printf("q = %d\n", diff);
    q -= 2;

    printf("new value of q = %d\n", *q);

    return 0;
}