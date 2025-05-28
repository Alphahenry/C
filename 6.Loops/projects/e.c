#include<stdio.h>
int main(){
    int e;
float fact = 1;
     float n;
    printf("Print the value of n: ");
    scanf("%f", &n);
    
    
   //find factorial of number n
   if (n >= 1){
            for (float i = 1; i <= n; i++){
                    fact *= (1.0/i);

                    
        }

        printf("factorial is: %f", fact);

   }else if (n == 0)
   {
      fact = 1;
   }else{
    printf("factorialdoesnt exist");
   }
   
 
   
   
    
    return 0;
}