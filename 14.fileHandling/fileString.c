#include<stdio.h>

int main(){

  FILE *fp;

  char str[50] = "Alpha Mutuma";

  fp = fopen("name2.txt", "w");

   fputs(str, fp);

   fclose(fp);
   




    return 0;
}