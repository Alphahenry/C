#include<stdio.h>
#define N 10

int main(){
   int a[N];
   int sum;
   int *p;



   for (int i = 0; i < N; i++)
   {
     printf("Enter value for %d:", i);
     scanf("%d", &a[i]);
    
   }
   
   //print array
   for (int i = 0; i < N; i++)
   {
      printf(" %d", a[i]);
   }
   
   
   //array processing

   sum =0;

   for ( p = &a[0]; p < &a[N]; p++)
   {
      sum += *p;
   }

   printf("Sum is %d\n", sum);


   


    return 0;
}