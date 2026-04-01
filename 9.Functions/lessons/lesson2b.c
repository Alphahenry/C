//functions with arguments

#include<stdio.h>

void sum(int a, int b);
void sum2(int x, int y);


int main(){
    sum2(10,10);
    sum(4,3);

    return 0;
}

void sum2(int x, int y){

    printf("Enter value of a and b: \n");
    scanf("%d,%d", &x,&y);
    int summ2 = x + y;
    printf("The sum is %d\n",summ2);

};

void sum(int a, int b){

    int summ = a + b;
    printf("The sum is %d\n", summ);
}