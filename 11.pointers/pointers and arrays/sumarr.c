#include<stdio.h>

int main(){
  int  myarr[] = {23,5,6,7,8,99,23};

  int *p;
  int sum;
  p = &myarr[0];
  while (p < &myarr[7])
  {
     sum += *p++;
  }

  printf("sum is %d\n", sum);

  



    return 0;
}