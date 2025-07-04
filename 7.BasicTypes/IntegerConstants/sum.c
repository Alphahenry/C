//summing a series of numbers
#include<stdio.h>
#include<limits.h>

int main(){
    long double n, sum = 0;
    
    printf("This program sums a series of integers\n");
    printf("Enter integers (enter 0 to terminate): \n");

    scanf("%lf", &n);

    //loop to sum integers


    while (n != 0){
        sum += n;
        scanf("%lf",&n);

    }

    printf("The sum is %lf\n", sum);

    



    return 0;
}