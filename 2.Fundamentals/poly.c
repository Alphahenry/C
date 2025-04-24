#include<stdio.h>
int main(){
   
  int x;

  printf("Enter value of x: ");
  scanf("%d", &x);

  int ans = 3* x * x* x *x *x + 2*  x * x* x *x  - 5 * x* x *x  - x * x  + 7 * x - 6; 
  printf("Value of the polynomial is: %d\n", ans);

    return 0;
}