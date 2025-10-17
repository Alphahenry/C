//static variable has a permanent storage duration
#include<stdio.h>

void mynum(void){
     static int i;
     printf("Enter num: \n");
     scanf("%d", &i);
     printf("The value of i is: %d\n", i);
}

int main(){

    mynum();

    return 0;
}

