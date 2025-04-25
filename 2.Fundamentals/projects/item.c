#include<stdio.h>
int main(){

    int item_num;
    float price;
    int month,date,year;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date: ");
    scanf("%d-%d-%d", &month, &date, &year);

    
    printf("ITEM\tUNIT PRICE\tPURCHASE DATE\n");
    printf("%d\t%2.2f\t\t%d-%d-%d\n", item_num, price,month,date,year);
    


    return 0;
}