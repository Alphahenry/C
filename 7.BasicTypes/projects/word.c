#include<stdio.h>

int main(){
    char c;
    float count = 0;
    float word = 1;


    printf("Enter sentence: ");
    while ((c = getchar()) !=  '\n'){
      count++;
        if (c == ' '){
            word++;
            count--;
        }


    }

    //finding average

    float average = count / word;

    printf("The average is %.f", average);
    
    
    
    




    return 0;
}