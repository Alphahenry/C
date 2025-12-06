#include<stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){


    int rem;

 
 *twenties =   dollars / 20;
 dollars = dollars - (*twenties * 20);
 

 

 *tens = dollars/10;
 dollars = dollars - (*tens * 10);
 

*fives = dollars / 5;
dollars = dollars - (*fives * 5);

*ones = dollars /1;
 



    

}


int main(){
    int amount = 0, bill_20, bill_10, bill_5, bill_1;
    printf("Enter US dollar amount: \n");
    scanf("%d", &amount);
   pay_amount(amount,&bill_20,&bill_10,&bill_5,&bill_1);

   printf("bill_20 is : %d\n", bill_20);
   printf("bill_10 is : %d\n", bill_10);
   printf("bill_5 is %d\n", bill_5);
   printf("bill_1 is %d\n", bill_1);
 

    return 0;
}