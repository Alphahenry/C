#include<stdio.h>
int main(){
    
    float commission , value;

    while (value != 0)
    {

        printf("Enter value of trade: ");
        scanf("%f", &value);

        if (value == 0)
        {
            break;
        }
        

        if (value < 2500)
        {
            commission =  30 + 0.017 * value;
        }else if (value < 6250 )
        {
            commission = 56 + .066 * value;
        }else if (value < 20000){
            commission = 76 + .0034 * value;
        }else if (value < 50000)
        {
            commission = 100 + .0022 * value;
        }else if (value < 500000)
        {
            commission = 155 + .0011 * value;
        }else
        {
            commission = 255 + .00099 * value;
        }

        if (commission < 39){
            commission = 39;
        }

         printf("commission will be: $ %.2f\n", commission );
        
    }
    


   
    
    
    
    
    



    return 0;
}