#include<stdio.h>

int main(){
    int a[] = {23,45,66,77,43,100};

    int *p = a;
    
  

    printf("The value of p is =: %d\n", *p);

    //after incrementing
       p++;
    printf("The value of p is now : %d\n", *p);

    int *q = &a[3];
   
    printf("Q points to : %d", *q);
     printf("Now the value of q is: %d", *++q);


    return 0;
}