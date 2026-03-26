//easier way of summing using a function

#include<stdio.h>

void sum(){

    int a,b, sum = 0;

    printf("Enter the two numbers to sum: ");

    scanf("%d,%d", &a, &b);

    sum = a + b;

    printf("The sum is = %d\n", sum);
};

int main(){
    sum();
    return 0;
}