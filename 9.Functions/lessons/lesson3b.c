//caall by reference...its the best method

#include<stdio.h>


void display_num(int *a, int *b);



void display_num(int *a, int *b){

      *a = 20;
      *b = 30; 

      printf("a = %d and b = %d\n", *a, *b);
}
int main(){
   int a = 30;
   int b = 20;

   display_num(&a, &b);
   printf("a = %d and b = %d\n", a,b);
}