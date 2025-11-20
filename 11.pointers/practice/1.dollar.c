//program to show dollar bills needed
#include<stdio.h>

int value;
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){

  

    

    int bill_20 = value /20;
    *twenties = &bill_20;

    int rem_value = value - (20 * bill_20);

    int bill_10 = rem_value / 10;
    *tens = &bill_10;

    rem_value = rem_value - (10 * bill_10);

    int bill_5 = rem_value / 5;
    *fives = &bill_5;

    rem_value =rem_value - (5 * bill_5);

    int bill_1 = rem_value / 1;
    *ones = &bill_1;


}
int main(){

    int b20,b10,b5,b1;
   
    printf("Enter value:\n ");
    scanf("%d",&value);

  pay_amount(value, b20,b10,b5,b1);

    printf("the dollar bills are:\n");
    printf("20$: %d\n",b20); 
    printf("10$: %d\n",b10 ); 
    printf("5$: %d\n",b5); 
    printf("1$: %d\n",b1); 


    return 0;
}