//using radom in C
//itds used to generate pseudo random numbers therefore you cant use it in cryptography

#include<stdio.h>
//required headers
#include<time.h>
#include<stdlib.h>


int main(){

   // generate a random number

   int random_number = rand();

   printf("Random number: %d", random_number);

    return 0;
}