//function with argument and no return type

#include <stdio.h>


float sum(float a, float b);
int main(){
    float a, b;
    printf("Enter number a and b: ");
    scanf("%f,%f", &a,&b);

     sum(a,b);
    return 0;
}

float sum(float a, float b){
    float sum = a + b;

    printf("The sum is: %f\n", sum);
}

