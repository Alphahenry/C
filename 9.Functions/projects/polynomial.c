#include<stdio.h>
#include<math.h>

int polynomial(int x){
   
  int res =  (3 * pow(x,5)) + (2 * pow(x, 4)) - pow(x,2) + (7 * x) - 6;
  printf("The value of the polynomial is: %d\n", res);

}

int main(){
    int x;

    printf("Enter value of X: ");
    scanf("%d", &x);
    polynomial(x);

    return 0;
}