//pointer addition(used in arrays)
#include<stdio.h>

int main(){
   
    int c[5] = {34,56,33,5,21};

    int *a;

    a = &c[0];

    printf("a points to = %d\n", *a);

    a = a +3;//pointer addition

    printf("Now a points to = %d\n", *a);

    



    return 0;
}