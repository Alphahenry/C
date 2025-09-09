#include<stdio.h>

/*function that doesnt retun something*/



void count_down(int n){

        printf("T minus %d and counting \n", n);
    }


int main(void){
  int i;

  for (i = 0; i > 0; --i)

  {
    count_down(i);
  }
  

    return 0;
}