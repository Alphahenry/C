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
   
   


    return 0;
}