//pointer increment and decrement

#include<stdio.h>


int main(){
    int a[] = {3,5,6,9,6,4};
    int *p;

    p = &a[0];

    printf("Before increment p = %d\n ", *p);

    p++;

    printf("After increment p = %d\n", *p);

    


    return 0;
}