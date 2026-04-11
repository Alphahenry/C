//function with no argument and no return type


#include <stdio.h>


void sum(void);


void sum(){

    int a = 10, b = 20;
    
    int Sum = a + b;

    printf("the sum is = %d\n", Sum);

}


int main(){
    sum();
    return 0;
}