#include<stdio.h>

int main(){

    char l_nameFisrstchar = '\0';

    char c;
    printf("Enter first name and last name:  ");
    scanf(" %c", &l_nameFisrstchar);

    while ((c = getchar()) != ' ');

    while ((c = getchar()) == ' ');
    

    //clearing any extra input
    // while ((c = getchar()) != '\n' && c != ' ')
    // {
    //     c = getchar();
    // }
  do
  {
    putchar(c);
  } while ((c = getchar()) != '\n' && c != ' ');
  

    // printf("Enter last name: ");

    //input first character

    // while ((c = getchar()) != '\n'){
      
    //     l_nameFisrstchar = c;
    // }

    // while ((c = getchar()) != '\n' && c != EOF){
    //     continue;
    // }

    printf(", %c.", l_nameFisrstchar);
    

    return 0;
}