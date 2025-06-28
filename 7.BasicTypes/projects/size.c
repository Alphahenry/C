#include<stdio.h>


int main(){

    int my_int;
    float my_float;
    double my_double;
    long double mylongDouble;
    long my_long;
    short my_short;


    printf("Size of integer is: %zu\n", sizeof(my_int));
    printf("Size of float is: %zu\n", sizeof(my_float));
    printf("Size of double is: %zu\n", sizeof(my_double));
    printf("Size of long double is: %zu\n", sizeof(mylongDouble));
    printf("Size of long  is: %zu\n", sizeof(my_long));
    printf("Size of short  is: %zu\n", sizeof(my_short));


    return 0;
}