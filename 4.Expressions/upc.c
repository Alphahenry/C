#include<stdio.h>

int main(){
   int d;
   int  i1,i2,i3,i4,i5;
   int j1,j2,j3,j4,j5;
   int first_sum, sec_sum;
   int total;


   printf("Enter first single digit: ");
   scanf("%1d", &d);

   printf("enter first group of 5: ");
   scanf("%1d%1d%1d%1d%1d", &i1,&i2,&i3,&i4,&i5);

   printf("Enter the second group of 5: ");
   scanf("%1d%1d%1d%1d%1d", &j1,&j2,&j3,&j4,&j5);

   first_sum = d + i2+  i4+ j1 + j3 + j5;
   sec_sum =  i1 + i3 + i5 + j2 + j4;

   total = 3 * (first_sum + sec_sum);

   printf("check digit: %d\n", 9 - ((total - 1)% 10));

   



    return 0;
}