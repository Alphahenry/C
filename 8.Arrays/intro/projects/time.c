#include<stdio.h>


int main(){
     int hour;
    int minute;
    char Am_Pm;

   int departure_time[8] ={8,9,11,12,2,3,7,9};
   int arrival_time[8]= {10,11,1,3,4,9,11};

   
//ask user to entr time
    printf("Enter 24hr  time: ");
    scanf("%d:%d %c", &hour,&minute, &Am_Pm);


    for (int i = 0; i < 8; i++)
    {
        if ((departure_time[i] == 8 && minute >15))
        {
           printf("closest departure time is 8:00am, arriving 10:16am\n");
        }
    else if (departure_time[i] == 9 && minute > 43 )
    {
      printf("closest departure time is 9:43am, arriving 11:52am\n");   
    }
    else if (departure_time[i] == 11 && minute >= 19)
    {
        printf("closest departure time is 11:19am, arriving 1:00pm\n");
    }
    else if (departure_time[i] == 12 && hour >= 47)
    {
        printf("closest departure time is 12:47am, arriving 3:00pm\n");
    }
    else if (departure_time[i] == 14 && minute >= 00)
    {
       printf("closest departure time is 2:00pm, arriving 4:08pm\n");
    }
    else if (departure_time[i] == 15 && minute >= 45)
    {
        printf("closest departure time is 3:45pm, arriving 5:55pm\n");
    }
    else if (departure_time[i] == 19 && minute >= 00)
    {
        printf("closest departure time is 7:00pm, arriving 9:20pm\n");
    }
    else if (departure_time[i] == 21 && minute >= 45)
    {
        printf("closest departure time is 9:45pm, arriving 11:58pm\n");
    }
    
    else
    {
        printf("Wrong input!Try again");
    }
        
    }
    
    return 0;
}