//lesson 2
#include<stdio.h>

int main(){
   
    int a = 10, b = 9;
    int *p, *q;

    p = &a;
    q = &b;

    //try to print value of a using pointer

    printf("value of a = %d\n", p);//will print the address of a

    //therefore to print the value of a we use indirect operator
    printf("value of a = %d\n", *p);



    return 0;
}