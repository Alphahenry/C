#include<stdio.h>



   double average(double a, double b, double c){

		return (a + b + c)/ 2;
	}

 

int main(){

    //computes average

	double x,y,z;

	printf("Enter three numbers: \n");

	scanf("%lf%lf%lf", &x,&y,&z);

	printf("The average of %g and %g and  %g is %f", average(x,y,z));



   

	
	return 0;
}
