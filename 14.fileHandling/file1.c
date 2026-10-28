#include<stdio.h>

int main(){

  FILE *fp;
   char ch = 'A';

  fp = fopen("name.txt", "w");
  fputc(ch,fp);

  fclose(fp);
  


    return 0;
}