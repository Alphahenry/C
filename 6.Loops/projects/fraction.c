
//program to reduce fraction
#include<stdio.h>

int main(){
    int num, den;
    int gcd;
    printf("Enter numerator:");
    scanf("%d", &num);

    printf("Enter denominator: ");
    scanf("%d", &den);

    //find gcd of num and den
    for(;;){
        
        if (den > num){
            if( num  == 0){
                den = gcd;
                break;
            }

            int rem = den % num;
            den = num;
            num = rem;
            
            gcd = den;

        }
     


    
    }

    printf("Gcd is: %d\n", gcd);
   // enter original fraction

   printf("Enter original fraction: \n");

   printf("Numerator: ");
   scanf("%d", &num);
   
   printf("Enter denominator: ");
   scanf("%d", &den);

    



    //simplifying the fraction
    int num_simp = num / gcd;
    int den_simp = den / gcd;

    printf("in lowest terms: %d/%d\n", num_simp,den_simp);
      

    return 0;
}