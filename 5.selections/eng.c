//two digit number into 2 digits;

#include<stdio.h>

int main(){


    //ask user for 2 digits number
    int number;
    printf("Enter 2 digit number: ");
    scanf("%d", &number);
    // if (number < 10 || number > 99)
    // {
    //     printf("Error!");
    //     //return 0 tell os program finished successfully
    //     return 0;//under these conditions the whole  program will terminate here.
    // }

    

    //split the number

    int first_digit = number / 10;
    int second_digit = number % 10;
 
    
if(first_digit == 1){
    switch (second_digit)
    {

    case 0:
        printf("ten");
        break;   
    case 1:
        printf(" eleven");
        
        break;

    case 2:
        printf(" twelve ");
        
        break;

    case 3:
        printf("thirteen");
        break;
    case 4:
        printf(" fourteen ");
        
        break;
        
    case 5:
        printf(" fifteen ");
        
        break;

    case 6:
        printf(" sixteen ");
        
        break;

    case 7:
        printf(" seventeen ");
        
        break;

    case 8:
        printf(" eighteen");
        
        break;

    case 9:
        printf("nineteen");

    
    default:
        break;
    }

}else if(first_digit == 2){
    printf("Twenty");

    
    switch (second_digit)
    {
    case 1:
        printf("-one");
        break;

    case 2:
        printf("-two");
        break;

    case 3:
        printf("-three");
        break;
        
    case 4:
        printf("-four");
        break;

    case 5:
        printf("-five");
        break;

    case 6:
        printf("-six");
        break;

    case 7:
        printf("-seven");
        break;
    
    case 8:
         printf("-eight");
         break;

      
    case 9:
        printf("-nine");
        break;


    default:
        break;
    }




}

    return 0;
}