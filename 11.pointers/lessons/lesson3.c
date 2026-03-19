//pointer assignment

#include<stdio.h>

int main(){
    
    int a = 45, b = 77;

    int *p, *q;


    p = &a;

    q = p;

    printf("The value of p is: %d", *p);

    printf("The value of q is: %d\n", *q);




    return 0;
}