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

  
  char rev[max_size] = "";
  //length of sentence

  int length = strlen(sent1);

  int i = length -1;
  int j = 0;
  while (i >= 0)
  {
    rev[j] = sent1[i];
    i--;
    j++;
  }
  
  printf("%s", rev);







    return 0;
}