
//prints a table of compound interest

#include<stdio.h>
#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE  100.0

int main(){
   int low_rate, no_of_years, year;
   double value[5];

   printf("Enter interest rate: ");
   scanf("%d", &low_rate);

   printf("Enter number of years :");
   scanf("%d", &no_of_years);

   printf("/nYears");
   for (year = 0; year <= NUM_RATES; year++)
   {
      printf("%6d%%", low_rate + 1);
      for(int i = 0; i < NUM_RATES; i++)
      {
         value[i] += (low_rate + i) / 100.0  * value[i];
         printf("%7.2f", value[i]); 
      }

      printf("\n");
      
   }
   


    return 0;
}