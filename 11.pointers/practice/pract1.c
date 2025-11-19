#include<stdio.h>

int main(){

  int i = 20;

  int *p = &i;

  printf("The value of i is: %d\n",*p);
  printf("The value of i is also: %d\n", i);


//address of thge pointer
printf("address is : %p\n", &i);
printf("another way is: %p\n", (void*)&i);

    return 0;
}