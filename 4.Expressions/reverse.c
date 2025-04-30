//accepter numbr from user and the reverse it

#include<stdio.h>
int main(){

    int i1,i2,i3;
    printf("Enter your three digit number: ");
    
    scanf("%d,%d,%d", &i1,&i2, &i3);

    printf("The entered number is: %d%d%d\n", i1,i2,i3);

    printf("reverse number is: %d%d%d\n",i3, i2,i1);


    return 0;
}