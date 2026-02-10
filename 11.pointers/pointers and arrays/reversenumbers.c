//reversing   a series of numbers

#include<stdio.h>

#define N 10

int main(){

   int a[N];
   int *p;

   printf("Enter %d numbers: ", N);

   for ( p = a; p < a; p++)
   {
     scanf("%d", p);
   }

   printf("Print in reverse order: ");

   for (p  = a + N-1; p >= a; p--)
   {
     printf("%d", *p);
   }
   printf("\n");
   
   





    return 0;
}
