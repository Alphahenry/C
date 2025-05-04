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

}else{


    switch (first_digit)
    {
    case 2:
        printf("twenty-");
        break;

    case 3:
        printf("thirty-");
        break;

    case 4:
        printf("fourty-");
        break;

    case 5:
        printf("fifty-");
        break;
        
    case 6:
        printf("sixty-");
        break;

    case 7:
        printf("seventy-");
        break;

    case 8:
        printf("eighty-");
        break;

    case 9:
        printf("ninety-");
        break;
    
    default:
        break;
    }
}

    return 0;
}