//decimal constants in C
//decimalconstants conatins digit between 0 and 9. and must not begin with zero
#include<stdio.h>


int main(){

    int x = 10; 
    int x2 = 011;


    printf("%d\n", x);
    printf("%d\n", x2);//becomes 9 since 011 is octal for 9

    return 0;
}