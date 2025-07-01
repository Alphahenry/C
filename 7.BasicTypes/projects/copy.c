
#include<stdio.h>

int main() {
    unsigned int n;
    unsigned long long factorial = 1;  // Use larger data type
    
    printf("Enter positive integer: ");
    scanf("%u", &n);  // Get user input
    
    unsigned int temp = n;
    while (temp > 1) {
        factorial *= temp;
        temp--;
    }

    printf("Factorial of %u is %llu\n", n, factorial);
    
    return 0;
}