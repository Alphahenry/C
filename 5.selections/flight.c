#include<stdio.h>

int main(){
    int hour;
    int minute;
    char Am_Pm;

    printf("Enter 24hr  time: ");
    scanf("%d:%d %c", &hour,&minute, &Am_Pm);

    if ((hour == 8 && minute > 15 ))
    {
        printf("closest departure time is 8:00am, arriving 10:16am\n");
    }
    else if (hour == 9 && minute > 43 )
    {
      printf("closest departure time is 9:43am, arriving 11:52am\n");   
    }
    else if (hour == 11 && minute >= 19)
    {
        printf("closest departure time is 11:19am, arriving 1:00pm\n");
    }
    else if (hour == 12 && hour >= 47)
    {
        printf("closest departure time is 12:47am, arriving 3:00pm\n");
    }
    else if (hour == 14 && minute >= 00)
    {
       printf("closest departure time is 2:00pm, arriving 4:08pm\n");
    }
    else if (hour == 15 && minute >= 45)
    {
        printf("closest departure time is 3:45pm, arriving 5:55pm\n");
    }
    else if (hour == 19 && minute >= 00)
    {
        printf("closest departure time is 7:00pm, arriving 9:20pm\n");
    }
    else if (hour == 21 && minute >= 45)
    {
        printf("closest departure time is 9:45pm, arriving 11:58pm\n");
    }
    
    else
    {
        printf("Wrong input!Try again");
    }
    
    
    
    

    
    
    


    return 0;
}