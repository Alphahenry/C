#include<stdio.h>

int main(){

//declare variables

double item_no;
double unit_price;

int date,month,year;



   //input for item_no
   printf("Enter item no: ");
   scanf("%lf",&item_no );

   //input  unit price
   printf("Enter unit price: ");
   scanf("%lf", &unit_price);


   //input purchase date;

   printf("Enter date purchased(dd/mm/yyy); ");
   scanf("%d%d%d", &date,&month,&year);
   
   printf("ITEM\tUNIT PRICE\tPURCHASE DATE\n");

   printf("%.2lf\t%-4.2lf\t%9d%d%d\n", item_no, unit_price, date,month,year);





    return 0;
}