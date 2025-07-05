//check digits repeated in a number

#include<stdio.h>
#include<stdbool.h>
int main(){
   bool digit_seen[10] = { false};
   int digit;
   long n;

   printf("Enter a number: ");
   scanf("%ld", &n);

   while (n > 0){
    digit = n % 10;
        if (digit_seen[digit])
        {    
            printf("repeated digit is %d\n,", digit);
            break;
            return 0;


           

        }
         digit_seen[digit] = true;
            n /= 10;
        

    }
       // printf("No repeated digit\n");
        return 0;

}
   
   





