//program to show dollar bills needed
#include<stdio.h>
int main(){
    int value;
    printf("Enter value:\n ");
    scanf("%d",&value);

    int bill_20 = value /20;

    int rem_value = value - (20 * bill_20);

    int bill_10 = rem_value / 10;

    rem_value = rem_value - (10 * bill_10);

    int bill_5 = rem_value / 5;

    rem_value =rem_value - (5 * bill_5);

    int bill_1 = rem_value / 1;


    printf("the dollar bills are:\n");
    printf("20$: %d\n",bill_20 ); 
    printf("10$: %d\n",bill_10 ); 
    printf("5$: %d\n",bill_5 ); 
    printf("1$: %d\n",bill_1 ); 


    return 0;
}