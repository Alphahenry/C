//summing a series of numbers
#include<stdio.h>

int main(){
    long n, sum = 0;
    
    printf("This program sums a series of integers\n");
    printf("Enter integers (enter 0 to terminate): \n");

    scanf("%ld", &n);

    //loop to sum integers

    while (n != 0){
        sum += n;
        scanf("%ld",&n);

    }

    printf("The sum is %ld\n", sum);

    



    return 0;
}