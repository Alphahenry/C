//PROGRAM THAT RETURNS DAY MONTH AND YEAR
#include<stdio.h>


//define func
int day_of_year(int day, int month, int year);

int main(){
  int day;
    int month;
    int year;

   day_of_year(day,year,month);

 

    return 0;
}
int day_of_year(int day, int month, int year){
    int result;
    //user input
  
        
    printf("Enter day, month and year: ");
    scanf("%d,%d,%d", &day,&month,&year);

    result = printf("The dya is: %d-%d-%d", day,month,year);
        
    
}