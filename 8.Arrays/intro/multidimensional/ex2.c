//constant arrays
#include<stdio.h>

int main(){

     //char array
     const char hex_char [] = {
        'A','B','C','G'
     };

     for(int i = 0; i < 4;i++){
        printf(" %c\n", hex_char[i]);
     }
    return 0;
}