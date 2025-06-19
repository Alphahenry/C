//summing a series of double numbers
#include<stdio.h>

int main(){
    long double n, sum = 0;
    
    printf("This program sums a series of integers\n");
    printf("Enter integers (enter 0 to terminate): \n");

    scanf("%Lf", &n);

    //loop to sum integers


    while (n != 0){
        sum += n;
        scanf("%Lf",&n);

    }

    printf("The sum is %Lf\n", sum);

    



    return 0;
}