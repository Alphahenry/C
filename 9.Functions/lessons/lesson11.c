//function that returns a pointer
#include<stdio.h>

int *return_pointer(int a[]);


int main(){
    int *p;
    int a[] = {1,2,3,4,5,6,7};

    p = return_pointer(a);

  printf("%d", *p);
    
    
    return 0;
}

int *return_pointer(int a[]){
    
    return a;
}