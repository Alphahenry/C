//program to print format of date in form of dd/mm/year and prints yyyymmdd
#include<stdio.h>
int main(){
    //request user to enter date

    int date,month, year;

    printf("Enter date,month and year: ");
    scanf("%d/%d/%d", &date, &month, &year);
    

    printf("%d%d%d", year,month, date);



    return 0;
}