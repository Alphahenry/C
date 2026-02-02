//dereferencing apointer

#include<stdio.h>

int main(){
    int a = 10;

    int *p = &a;


    //value of a 

    printf("The value of a = %d",*p);

    //memory address of a is

    printf("Memory address of a : %p", &a);





    return 0;
}