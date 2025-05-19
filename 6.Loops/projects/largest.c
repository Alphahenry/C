//program that displays largest number in  aseries entered by user

#include<stdio.h>

int main(){
    //take user input
    
    float curr;
    float largest = 0.0f;
    for(;;)
    {
            
        printf("Enter a number: ");
        scanf("%f", &curr);
        if(curr == 0 || curr <0){
            break;
        }
        if (curr > largest)
        {
            largest = curr;
        }
        

        //printf("%f\n", largest);tests if loop works
    }

    printf("The largest number is: %0.2f\n", largest);




    return 0;
}