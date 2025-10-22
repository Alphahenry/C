#include<stdio.h>


int swap_num(int i, int j){
   
	printf("Enter i: ");
	scanf("%d", &i);

	printf("Enter j: ");
	scanf("%d", &j);


	if(i > j){

          int temp = i;

	  i = j;

	  j = temp;


	}

	printf("i = %d\n", i);
	printf("j = %d\n", j);
}


int main(){

 





return 0;
}

