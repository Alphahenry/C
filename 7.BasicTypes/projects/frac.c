#include<stdio.h>

int main(){

    float frac1 = 1.0f/5.0f;
    float frac2 = 1.0f/3.0f;

    float ans;
    
    char sign;

    printf("Enter arithmetic sign: ");

    while ((sign = getchar())!= '\n')
    {
        switch (sign)
        {
            case '*':
            ans = frac1 *frac2;
            break;
             

            case '-':
            ans = frac1 - frac2;
            break;


            case '/':
            ans = frac1 / frac2;
            break;

            case '+':
            ans = frac1 + frac2;
            break;

        default:
            break;
        }

        
    }
    
    printf("The ans is: %.f\n", ans);


    return 0;
}