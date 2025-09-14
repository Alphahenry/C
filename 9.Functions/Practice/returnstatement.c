//A non void function must have a return type
//however it can be used when necessary.
#include<stdio.h>


void display(int i){

    if (i < 0)
    {
        return;
    }
    printf("You positive number is: %d\n", i);
}


int main(){
    int num;
    printf("Enter a positive number: \n");
    scanf("%d", &num);

    display(num);


    return 0;
}