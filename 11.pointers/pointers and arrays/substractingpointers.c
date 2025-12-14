#include<stdio.h>

int main(){


    int a[10], *p, *q;

    p = &a[5];
    q = &a[1];


    int i = p-q;

    printf("%d\n", i);
    
}