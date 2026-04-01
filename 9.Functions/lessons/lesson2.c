//declare void function and show its void explicitly(that is it doest take any arguments


//return type f-name(arguments)

#include<stdio.h>

void sum(void);

int main(void){

 sum();


    return 0;
}

void sum(void){
    int a, b , sum = 0;
    printf("Enter values for a and b: ");
    scanf("%d,%d", &a,&b);

    sum = a + b;

    printf("The sum is: %d", sum);
}