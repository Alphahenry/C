#include<stdio.h>

int main(){

 int i = 3;
 int j = 4;

 int *p, *q;

 p = &i;
 q = &j;




 //print value of i
 printf("the value of i is %d\n:", i);

 //print the value of j
 printf("The value of j is %d\n:", j);

 
 p = q;



//  *p = *q;


 printf("New values of i and j are: ");

 printf("i is: %d\n", i);
 printf("J is : %d\n", j);

    return 0;
}