//program to find squares of odd numbera

#include<stdio.h>

int main(){

   int n;
   printf("Enter endoint of squares: ");
   scanf("%d", &n);

   int odd = 0;
   
   for (int  i = 1; i < n; i+=2)
   {
      printf("%d%5d\n", odd, odd * odd);
      odd+=2;
   }
   

    return 0;
}