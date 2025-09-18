//function trhat returns day onth year

#include<stdio.h>

int day_of_year(int month, int day, int year);
int main(){
   //get user input

   int month, day,year;

   printf("Enter month, day, year: \n");
   scanf("%d,%d,%d", &month,&day,&year);

   day_of_year(month,day,year);

    return 0;
}

int day_of_year(int month,int day,int  year){
    printf("The current day is: %d,%d,%d", month,day,year);

}
