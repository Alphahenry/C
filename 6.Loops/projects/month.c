//program to display calender
#include<stdio.h>

int main(){

    int n;//number of days in a month

    printf("Enter number of days:  ");
    scanf("%d", &n);

    for (int i = 1; i <=  n; i++)
    {
        printf("%d",i);
    }
    

    return 0;
}