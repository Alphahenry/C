//display time in 12 hour format

#include<stdio.h>

int main(){
    //declare format for 24hr
    int f1_24, f2_24;

    //midnight

    int f1_12 = 12;
    int f2_12 = 00;



    printf("Enter 24hr time: ");
    scanf("%2d:%2d", &f1_24, &f2_24);
    
    int D1_12hr =  f1_24-f1_12;
    int D2_12hr = f2_24- f2_12;


    if (f1_24 >12 && f1_24 < 24 )
    {
          printf("the time in 12 hr format is: %d:%dpm\n", D1_12hr,D2_12hr);

    }else if (f1_24 <= 12)
    {
        printf("the time in 12 hr format is: %d:%dam\n", D1_12hr,D2_12hr);

    }else{
        printf("Wrong format!");
    }
    
    
    


    printf("the time in 12 hr format is: %d:%d\n", f1_24-f1_12, f2_24- f1_12);


    return 0;
}