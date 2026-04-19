//passing a string as an argument

#include<stdio.h>

void name(char f_name[], char s_name[]);

int main(){
    char str1[] = "james";
    char str2[] = "carter";
    name(str1,str2);

    return 0;
}


void name(char f[], char s[]){
    
     printf("Your name is: %s,%s", f,s);

}