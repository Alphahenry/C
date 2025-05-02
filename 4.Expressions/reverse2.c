//reverse using arithmetic
#include<stdio.h>

int main(){

    int number;
    printf("Enter number: \n");
    scanf("%d", &number);

    int first_digit = number % 10;
    int second_digit = number / 10;


    printf("number is: %d%d", first_digit,second_digit);
    return 0;
}