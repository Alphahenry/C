#include<stdio.h>
#include<stdbool.h>

int main(){

    //declare variable to store number entered
    long num1;
    long num2;

    //declare array to show number of digits and initialize as 0
    int occurences[10] = {false};
    int  digit1, digit2;

   //read the num

for (;;){

   printf("Enter the number: ");
   scanf("%ld", &num1);

   printf("Enter the number: ");
   scanf("%ld", &num2);


   if (num1  && num2 == 0)
   {
     break;
   }

   

   while(num1 && num2 > 0){
    digit1  = num1 % 10;
    occurences[digit1]++;
    num1  = num1 / 10;

   }

}

   printf("Digits: 0 1 2 3 4 5 6 7 8 9\n");
   printf("Ocurrences:");

   for (int i = 0; i < 10; i++)
   {
    printf("%d",occurences[i]);
   }
   
   
return 0;

}