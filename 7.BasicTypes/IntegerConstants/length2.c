#include<stdio.h>

int main(){

     int len = 0;

    printf("Enter message; ");

    //check whether charcter is not tthe enter key
    while (getchar() != '\n'){
        len++;
    }
    printf("The length is %d characters long\n", len);
    
    return 0;
}