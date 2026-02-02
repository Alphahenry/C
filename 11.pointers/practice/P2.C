//dereferencing apointer

#include<stdio.h>

int main(){
    int a = 10;

    int *p = &a;


    //value of a 

    printf("The value of a = %d\n",*p);

    //memory address of a is

    printf("Memory address of a : %p\n", &a);

    //hexadecimal memory address
    printf("hexadecimal : %x\n", &a);





    return 0;
}