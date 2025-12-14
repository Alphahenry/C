#include<stdio.h>


int main(){
    int a[10];

     int *p;

     int *q;

     int i;
     

     p = &a[2];
     //adding integer to  pointer;
     
     q = p + 3;

     p +=6;



    return 0;
}