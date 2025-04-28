//measure winds using knots
#include<stdio.h>

int main(){
     //measure speed of the wind and record

     int speed;

     printf("Enter speed in knots: ");
     scanf("%d", &speed);

    if (speed < 1)
    {
        printf("calm\n");

    }
    else if (speed >1 && speed < 3)
    {
        printf("light air\n");
    }

    else if (speed >3 && speed <=27)
    {
        printf("breeze\n");
    }
    else if (speed > 27 && speed <= 47)
    {
        printf("Gale\n");
    }
    else if (speed > 47 && speed <= 63)
    {
        printf("storm\n");
    }else if (speed >63 )
    {
        printf("Hurricane\n");
    }else
    {
        printf("Wrong Value\n");
    }
    
    
    
    
    
    
    

    return 0;
}