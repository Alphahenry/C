//enter two digit numbe: 60
//output.the number has 2 digits
#include<stdio.h>
int main(){
    int digits = 0, n;
    printf("Enter 2 digit number: ");
    scanf("%d", &n);

    do
    {
        n /= 10;
        digits++;
        
        
    } while (n>10);
    


    return 0;
}