//writing a a function that doesnt have parametres

#include<stdio.h>

void div();//function declaration

int main(){
  div();//calling function

}

void div(){
    int a,b;

    int quotient = 0;

    printf("Enter numbers to divide: ");
    scanf("%d,%d", &a,&b);

    printf("The quotient is: %d", a/b );
    


}


