//function pointer(instead of a switch case)
#include<stdio.h>

void add(int a , int b){
      printf("%d", a  + b);
}

void sub(int a, int b){

    printf("%d", a - b);
}

void prod(int a, int b){
    printf("%d", a * b);
}

void div(int a, int b){

    printf("%d", a/b);
}




int main(){
   int ch;
   int a, b;
  void (*fptr[10])(int , int) = {add, prod, div,sub};

   printf("Enter your choice:");
   scanf("%d", &ch);

   printf("Enter a and b: ");
   scanf("%d,%d", &a, &b);

   (*fptr[ch])(a,b);

    return 0;
}