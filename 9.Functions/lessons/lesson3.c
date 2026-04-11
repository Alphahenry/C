//calling by value vs call by reference
#include <stdio.h>




void display_numbers(int a, int b);

void display_numbers(int a, int b){

    a = 10;
    b = 20;

    printf("value of numbers are: a = %d and b  = %d\n", a,b);
}
int main(){
   int x,y;
   int z = 30, q = 40;
    
    display_numbers(x,y);
    display_numbers(z, q);



}