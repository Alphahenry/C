#include<stdio.h>

/*local variable declared inside a function*/

int sum_digits(int n){
      
	//local variable sum
	
	int sum = 0;

	while(n >0){
	
            sum += n % 10;
	    n /= 10;

	}

   return sum;
}


int main(){

   printf("The sum is : %d", sum_digits(145));


	return 0;
}
