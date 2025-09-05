#include<stdio.h>
#define First 10
#define Second 10

#define Full 20


int main(){

   //create an array of frst name

   char first_name[First] = "";

   //second name
   char second_name[Second] = "";

   //get name from user

   printf("Enter your first name: \n");
   int i;//counter for first name 
   for (int i = 0; i < First; i++)
   {
  //enter character by index

    printf("Enter character  at index %d: ", i + 1);

    char input = getchar();

    if (input == '0')
    {
        break;
    }
    

    first_name[i] = input;
   

     while (getchar() != '\n');
 
     
   }

   //null terminator
   first_name[i] = '\0';


   //loop to access second name

   printf("Enter second name: ");


   for (int i = 0; i < Second; i++)
   {
    printf("Enter character %d: ", i + 1);
     char input = getchar();

     second_name[i] = input;

     if (input == '0')
     {
        break;
     }

     while(getchar() != '\n');
     
   }
   second_name[i] = '\0';



   //combine the names
   printf("You entered the name: \n");
   printf("%c, %s", first_name[0], second_name);


   
   

   





    return 0;
}