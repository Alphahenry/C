/*program to determine length of a message*/
#include<stdio.h>

int main(){
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch = getchar();

    while (ch  != '\n')
    {
        len++;
        ch = getchar();
    }

    printf("Your message has %d characters long \n", len);

    
    return 0;
}