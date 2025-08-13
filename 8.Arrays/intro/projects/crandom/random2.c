//seeding 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){

//to get different sequences seed srand()
  srand(time(0));

  int random_num1 = rand();
  int random_num2 = rand();


  printf("first random: %d\n",random_num1);

  printf("first random: %d\n",random_num2);
    
    


    return 0;
}