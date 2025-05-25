#include<stdio.h>



int main(){
   //declare variables
   int f_date,f_month,f_year;
   int s_date, s_month,s_year;

for (;;)
{
    if (f_date == 0 && f_month == 0 && f_year == 0)
    {
        break;
    }

    if (s_date == 0 && s_month == 0 && s_year==0)
    {
        break;
    }


    
    


  //take user input
  printf("Enter first: date month year: ");
  scanf("%d/%d/%d", &f_date,&f_date,&f_date);

  printf("Enter second date, month, year");
  scanf("%d/%d/%d", &s_date,&s_month, &s_year);

  if (f_date > s_date || f_year > s_year )
  {
    printf("second date is earlier!");
  }
  

}  





    return 0;
}