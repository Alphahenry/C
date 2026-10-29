#include<stdio.h>


int main(){

  FILE *fp = NULL;
 char myName[50];

 fp = fopen("name2.txt", "r");

 if(fp == NULL){

    printf("file doesnt exist");
    return 1;

 }

 while (fgets(myName, sizeof(myName), fp) != NULL)
 {
    printf("%s\n", myName);
 }
 


    return 0;
}