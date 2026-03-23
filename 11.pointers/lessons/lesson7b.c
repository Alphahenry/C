//combining printf and increment

#include<stdio.h>

int main(){
    
   int b[] = {4,1,32,89,45,66,44};
   
   int *g = &b[0];
  


   printf("value of g is= %d\n ", *g++);

   //original value is returned and then g is incremented.

   printf("now g is =  %d\n", *g);



   //post decrement

   int arr[] = {90,67,43,55,77,28};
    int *p = &arr[0];

    printf("value of p is = %d\n", *p-- );

    printf("value of p = %d\n", *p);//gives a garbage value because no digit before 90


    return 0;
}