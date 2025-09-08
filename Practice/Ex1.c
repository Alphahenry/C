#include<stdio.h>



   double average(double a, double b){

		return (a + b)/ 2;
	}

 

int main(){

    //computes average

	double x,y,z;

	printf("Enter three numbers: \n");

	scanf("%lf%lf%lf", &x,&y,&z);

	printf("The average of %g and %g is  %g", x,y,average(x,y));



   

	
	return 0;
}
