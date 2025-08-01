#include<stdio.h>
#include<stdbool.h>

int main(){

    //declare variable to store number entered
    long num;

    //declare array to show number of digits and initialize as 0

    int occurences[10] = {false};
    int  digit;

   //read the num


for (;;){

   printf("Enter the number: ");
   scanf("%ld", &num);

   if (num == 0)
   {
     break;
   }
   

   while(num > 0){
    digit  = num % 10;
    occurences[digit]++;
    num  = num / 10;

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