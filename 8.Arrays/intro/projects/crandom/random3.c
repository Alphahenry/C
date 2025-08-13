#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//generating a number between a range between 0 and N
int main(){

    //probability of getting a certain fside of a dice.A dice hads 6 faces

    srand(time(0));


    int randNum = (rand() % 6) + 1;

    printf("%d", randNum);

    return 0;
}