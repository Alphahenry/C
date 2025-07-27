#include<stdio.h>
#include<stdbool.h>

int main(){

    //declare variables
     int digit_seen[10] = {false};
     int digit;
     int num;
     int repeated_digits[10] = {false};

     //enter number to check repeated digit
    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        if (digit_seen[digit] == true)
        {
            repeated_digits[digit] = true;
            break;

        }else
        {
            digit_seen[digit] = true;
        }
        
        num /= 10;
        
    }
    //REPEATED DIGITS

    for (int i = 0; i < 10; i++)
    {
        if (repeated_digits[i])
        {
            printf(" %d\n", i);
        }
        
    }

    



    



    






    return 0;
}