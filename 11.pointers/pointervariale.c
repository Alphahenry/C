#include<stdio.h>

int main(){

    //declaring a pointer variable and initializing

    int i = 10;
    int *p = &i;

//to print whats stored in i.
printf("What is stored in i: ");

// prints the value of i not the address of i
printf("%d\n", *p);

//to get the memory address of i
printf("%p\n", (void*)&i);

int y= 20;
int *g = &y;

//priint the value of y
printf("The value of y is: \n");
printf("%d", *g);

//get the memory address
printf("%p", (void*)&y);




}