#include<stdio.h>

int main(){
    //check this upc 01380015173
   int d;
   int  i1,i2,i3,i4,i5;
   int j1,j2,j3,j4,j5;
   int first_sum, sec_sum;
   int total;
   int correct_dig = 3;


   printf("Enter the 11 digit: ");
   scanf("%1d-%1d-%1d-%1d-%1d-%1d-%1d-%1d-%1d-%1d-%1d\n", &d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5);

  
   first_sum = d + i2+  i4+ j1 + j3 + j5;
   sec_sum =  i1 + i3 + i5 + j2 + j4;

   total = 3 * (first_sum + sec_sum);

   int check_digit = 9 - ((total - 1)% 10);

   printf("check digit: %d\n", check_digit);

   if(correct_dig != check_digit){
      printf("The check digit is correct!\n");
   }

   if(correct_dig == check_digit){
     printf("correct check digit.\n");
   }



   



    return 0;
}