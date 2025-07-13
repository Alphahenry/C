#include<stdio.h>

int main(){
   //declare variables
   int n;

   printf("Enter number of elements in the array: ");
   scanf("%d", &n);


   //array with n elements

   int a[n];
   
   printf("Enter the elements in the array: ");
   for(int i = 0; i< n; i++){
      scanf("%d", &a[i]);
   }

   //reverse the array
   printf("Print in reverse order: ");
   for (int i = n-1; i >= 0; i--)
   {
     printf("%d", a[i]);
   }
   printf("\n");

    return 0;
}