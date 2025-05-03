#include<stdio.h>

//main func


int main(){
//aslk user to enter Ean
int c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12;

printf("Enter Ean code: ");
scanf("%d-%d-%d-%d-%d-%d-%d-%d-%d-%d-%d-%d", &c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8,&c9,&c10,&c11,&c12);


int first_sum = c2 + c4 + c6 + c8 + c10 + c12;
int sec_sum = c1 + c3 + c5 + c7 + c9 + c11;

int total_sum = ((first_sum * 3) + sec_sum) - 1;

int check_digit = 9 - (total_sum % 10);

printf("check digit is: %d\n",check_digit);


    return 0;
}