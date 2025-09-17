#include<stdio.h>

double triangle_area(double base, double height);/*function prototype*/

double product;

int main(){

   //ask user for input
   int base;
   int height;
   printf("Enter base of triangle: \n");
   scanf("%d", &base);

   printf("Enter Height of triangle: \n");
   scanf("%d", &height);


   printf("The area of the triangle is  %.f: \n", triangle_area(base,height));

    


    return 0;
}

//function definition

double triangle_area(double base, double height){
      product = base * height;
      return product / 2;
}