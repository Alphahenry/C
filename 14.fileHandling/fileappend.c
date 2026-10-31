#include<stdio.h>

int main(){

 FILE *fp;

 char str[40];

 fp = fopen("name.txt", "a");
   
 if (fp == NULL){

    printf("empty text");

    return 1;
 }  
printf("Enter your string: \n");
fgets(str, sizeof(str), stdin);
fprintf(fp,"%s\n", str);

fclose(fp);
   
   
   
    return 0;

}