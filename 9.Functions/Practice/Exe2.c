//program that will countdownward 10 to 0 then kaboom

#include<stdio.h>

int starttime;

void count_down(int n){
    for (int n = starttime; n >0; n--)
    {
        printf("T minus %d seconds \n", n);
    }
    
}

int main(){
    
    printf("Enter  starttime: \n");

    scanf("%d", &starttime);



    count_down(starttime);
   


    

    return 0;
}