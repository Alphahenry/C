#include<stdio.h>

int main(){
   printf("Enter a sentence:");
   char vow;

   int count = 0;

   while ((vow = getchar()) != '\n'){
      switch (vow)
      {
      case 'a':
        count++;
        break;

      case 'e':
      count++;
      break;

       case 'i':
      count++;
      break;
      
       case 'o':
      count++;
      break;
      
       case 'u':
      count++;
      break;
      
      
      default:
        break;
      }
      
   }
   printf("Your vowel contains %d vowels\n", count);





    return 0;
}