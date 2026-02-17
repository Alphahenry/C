#include<stdio.h>

int main(){

    int a[] = {3,6,4,5,-12,-9};

    int *p = a;

    int *q = &a[3];

    printf("Value of p is = %d\n", *p);

    printf("Value of q is: %d\n", *q);

    printf("P-q = %ld\n", p-q);
    printf("q-p = %ld\n", q-p);

    //move q 2 steps backwards

    printf("value of q was = %d\n", *q);
  q = q-2;

  printf("Now the value of q is: %d\n", *q);

  p = p+ 2;

  printf("New value of p is = %d", *p);







    return 0;
}