#include<stdio.h>



union abc{

    int a;
    char b;
    float marks;

};

union abc value;

int main(){
    union  abc *ptr = &value;
    value.a = 4;
    value.b = 20;
    value.marks = 97;
  
  
  printf("Values of abc include: %d,%s,%f", ptr->a,ptr->b,ptr->marks);
    return 0;
}