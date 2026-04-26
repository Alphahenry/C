//pointer to a function

#include<stdio.h>

int sum(int a, int b);
int (*ptr)(int x,int y);

int main(){
    int S = 0;
    int (*ptr)(int x, int y)= sum;
    S = ptr(2,3);

    printf("The sum is %d", S );

    return 0;
}


int sum(int a, int b){

    return a + b;
}

