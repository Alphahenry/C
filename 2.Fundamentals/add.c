//printt 100 and add 5 % tax to it

#include<stdio.h>

int main(){
 int item;
 printf("Enter price of item: ");
 scanf("%d", &item);

 
 int tax = 5;

 int tax_added = item + tax;

 printf("with tax added: %d\n", tax_added);

 


 return 0;

}