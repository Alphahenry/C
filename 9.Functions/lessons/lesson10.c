//return a string

#include<stdio.h>


char* display();
int main(){
    char *name;
    name = display();

    printf("The name is %s\n", name);


    return 0;
}

char* display(){
    return "Alpha";
}