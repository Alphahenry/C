//program to calculate volume of a sphere

#include<stdio.h>
#define PI 3.14

int main(){

     float radius = 10;
     float volume = (4.0/3.0) * PI * radius * radius * radius;
     printf("volume is: %.1f", volume);

    return 0;
}