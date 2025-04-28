//display time in 12 hour format

#include<stdio.h>

int main(){
    //declare format for 24hr
    int f1_24, f2_24;

    //format for 12hr

    int f1_12 = 12;
    int f2_12 = 00;



    printf("Enter 24hr time: ");
    scanf("%2d:%2d", &f1_24, &f2_24);


    printf("the time in 12 hr format is: %d:%d\n", f1_24-f1_12, f2_24- f1_12);


    return 0;
}