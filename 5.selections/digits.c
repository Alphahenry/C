//check how digits does a number have.
#include<stdio.h>

int main(){
    int number;

    printf("Enter number: ");
    scanf("%d", &number);


    if (number >= 0 && number <=99  )
    {
        printf("number has 2 digits\n");
    }

    else if (number >99 && number <= 999)
    {
        printf("number has 3 digits\n");
    }

    else{
        printf("Number has more than 3 digits\n");
    }

    if(number < 0){
        printf("error!nod negatives allowed\n");
    }
    
    
    return 0;
}
