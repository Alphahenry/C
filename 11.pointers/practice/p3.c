#include<stdio.h>

int main(){

    int a = 10;
    int b = 15;


    int *p, *q, *t;

    p = &a;
    q = &b;
    *t = *p;

  

    printf("address of a = %d\n",*p);
    printf("q points to b and b value is: %d\n", *q);
    printf("copied value of q to t: %d\n", *t);
    


    return 0;
}