//checking if number is prime
#include<stdio.h>
#include<stdbool.h>
int main(){
    //a prime number is a number divided evenly by one and itself
    
  bool numprime = true;
   //ask user for input
   int n;
   printf("Enter number to test if its a prime: ");
   scanf("%d", &n);


   for (int d= 2; d <n; d++)//n is the user input.if its 5 we are testing numbers from 2 upto 4 that can divide 5 without a rem
   {
      if(n % d == 0){
       numprime = false;
      break;

      }
   }
      if (numprime)
      {
        printf("num is a prime number.\n");
      }else
      {
        printf("num is not a prime number\n");
      }
      
      
            
      
  
   



    return 0;
}