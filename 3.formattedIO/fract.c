#include<stdio.h>

int main(){
    int num1,denom1, num2, denom2;

    printf("Enter num1 and denom1, nume2 and denom2: \n ");
    scanf("%d/%d + %d/%d", &num1,&denom1,&num2,&denom2);


    int res_num = num1 * denom2 + num2 * denom1;

    int res_den = denom1 * denom2;

    printf("The sum is: %d/%d\n", res_num, res_den);
    return 0;
}