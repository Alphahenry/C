//functions with arguments

#include<stdio.h>

void sum(int a, int b);


int main(){
    sum(4,3);
    return 0;
}


void sum(int a, int b){

    int sum = a + b;
    printf("The sum is %d\n", sum);
}