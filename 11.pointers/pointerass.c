#include<stdio.h>

int main(){


    int i,j, *p, *q;
    // i = 1;

    //copy address of i into p
//example one of assigning pointer var
    p = &i;

    //example 2

    q = p;

    //address of i(cintents of p) is copied to q                                                                            
   *q =2;

   printf("The value of i is : %d\n", i);




    return 0;
}