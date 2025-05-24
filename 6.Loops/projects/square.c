//program that prints square
#include<stdio.h>

int main(){
    int n;

    printf("Enter number of square: ");
    scanf("%d", &n);

    printf("n     square\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d%5d\n", i, i*i);
    }
    
    

    return 0;
}