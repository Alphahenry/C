//calling by value(value changes if you change parametere values in main function)
#include <stdio.h>




void display_numbers(int a, int b);

void display_numbers(int a, int b){

    a = 10;
    b = 20;

    printf("value of numbers are: a = %d and b  = %d\n", a,b);
}
int main(){
   int a = 20,b = 10;
    
    display_numbers(a,b);
    printf("a = %d and b = %d\n", a,b);



}