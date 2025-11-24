#include<stdio.h>


//prototype
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
    int bill_20;
    twenties = &bill_20;

    int bill_10;
    tens = &bill_10;

    int bill_5;
    fives = &bill_5;

    int bill_1;
    ones = &bill_1;

    printf("Enter US dollar amount: \n");
    scanf("%d", &dollars);

    

}


int main(){
   pay_amount();
 

    return 0;
}