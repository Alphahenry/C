//programm to convert number from integer to octal

#include<stdio.h>

int main(){

   int num;
   printf("Enter number between 0 and 32767: ");

   scanf("%d",&num);
      

  // divide  original by 8
   int new_num = num / 8;
  //the last digit
   int last_digit_rem1 =  num % 8;

   printf("%d\n", new_num);
   printf("last_digit_rem1: %d \n", last_digit_rem1);

   
   int new_num1 = new_num / 8;
   int second_lastd_rem2 = new_num % 8;

   printf("%d\n", new_num1);
   printf("second_lastd_rem2: %d\n", second_lastd_rem2);


   int new_num2 = new_num1 / 8;

   int third_last_digit = new_num1% 8;

   printf("%d\n", new_num2);
   printf("thirdlastdigit: %d \n", third_last_digit);


   int new_num3 = new_num2 / 8;
   int fourth_lastd = new_num2 % 8;

   printf("%d", new_num3);
   printf("fourth digit: %d", fourth_lastd);

   printf("in octal form:%2d%d%d%d\n", fourth_lastd,third_last_digit,second_lastd_rem2,last_digit_rem1);




    return 0;
}