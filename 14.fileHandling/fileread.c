
#include<stdio.h>


int main(){

   FILE *fp = NULL;

   char C;

   fp = fopen("name2.txt", "r");

   if (fp == NULL){

    printf("No file!");
    return 1;

   }
  // gets the first character
   C = fgetc(fp);
   printf("%c", C);
   fclose(fp);



    return 0;
}