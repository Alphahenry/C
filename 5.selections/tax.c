//program to calculate tax
#include<stdio.h>

int main(){
    double income;
    double tax;

    printf("Enter income: ");
    scanf("%lf", &income);

    if (income < 750)
    {
        tax = 0.001 * income;
        printf("Tax to be paid is: %.2f\n", tax );
    }
    else if (income >= 750 && income < 2250)
    {
        tax = 7.50 + .002 *(2250-750);
        printf("Tax to be paid is: %.2f\n", tax );
    }
    else if (income >= 2250 && income < 3750 )
    {
        tax = 37.50  + .003 *(3750-2250);
        printf("Tax to be paid is: %.2f\n", tax );
    }
    else if (income >= 3750 && income < 5250)
    {
        tax = 82.50 + .004 * (5250-3750);
         printf("Tax to be paid is: %.2f\n", tax );
    }
    else if (income >= 5250 && income < 7000)
    {
        tax = 142.50 + .005 * (7000-5250);
         printf("Tax to be paid is: %.2f\n", tax );
    }

    else if (income > 7000)
    {
       tax = 230.00 + .006 * (income-7000);
        printf("Tax to be paid is: %.2f\n", tax );
    }else
    {
        printf("wrong input");
    }
    
    
    
    
    
    

    return 0;
}