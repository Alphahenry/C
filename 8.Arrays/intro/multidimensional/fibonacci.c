//fibonnaci sequence.
#include<stdio.h>

int main(){
    int fib_num[40] = {[0] = 0,[1]=1};

    


   for (int  i = 2; i < 40; i++)
   {
       fib_num[i] = fib_num[i-1] + fib_num[i-2];
   }

   for (int i = 0; i < 40; i++)
   {
    printf(" %d", fib_num[i]);
   }
   
   


    return 0;
}