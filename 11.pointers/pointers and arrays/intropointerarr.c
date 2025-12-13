//declaring a pointer array

#include<stdio.h>

int main(){

    int a[10];

     int *p;

     p = &a[0];

     *p = 5;


     printf("%d", a[0]);

    return 0;
}