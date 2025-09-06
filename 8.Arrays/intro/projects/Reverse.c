//reverse a sentence

#include<stdio.h>
#include<string.h>
#define max_size 30


int main(){

   //store the sentence in the array
   char sent1[30] = "";

   //get sentence from usetr
   printf("Enter a sentence: ");

  fgets(sent1, sizeof(sent1), stdin);

  //removing newline characters
  if (sent1[strlen(sent1) - 1] == '\n')
  {
    sent1[strlen(sent1) -1] = '\0';
  }
  

  //print the sentence 
  printf("%s ", sent1);

  //reversing the array







    return 0;
}