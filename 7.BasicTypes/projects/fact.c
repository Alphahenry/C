
//program to check largest value of n that can be used  to get factorial
#include<stdio.h>
int main(){
     
    unsigned int n;
    short factorial = 1;
    printf("Enter a positive integer: \n");
    scanf("%u", &n);

    unsigned int temp = n;
    while (temp > 1){
        factorial *= temp;
        temp--;
    }

    printf("Factorial of %u is %hd: ", n, factorial);
    

    return 0;
}

//The maximum value is 11