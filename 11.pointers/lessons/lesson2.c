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
   
    //printing the address of a 
    printf("adress of a is : %x\n", &a);

    //print the adress of p 
    printf("The adress of p is: %x\n", p);
    

    return 0;
}