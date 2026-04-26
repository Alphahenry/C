//callback function

#include<stdio.h>

int add(int a, int b);
int sub(int a,int b);

int display(int (*ptr)(int, int));

int main(){

    display(add);
    display(sub);

    return 0;
}

int add(int a, int b){
     int sum = a + b;
    printf("The sum is %d\n", sum);
}

int sub(int x, int y){

    int sub = x - y;

    printf("The substraction value is: %d\n", sub);
}

//function passes other function as argument
int display( int  (*ptr)(int c,int d)){

    (*ptr)(3,5);

}