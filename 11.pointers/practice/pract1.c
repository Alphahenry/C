#include<stdio.h>

int main(){

  int i = 20;

  int *p = &i;

  printf("The value of i is: %d\n",*p);
  printf("The value of i is also: %d\n", i);


    return 0;
}