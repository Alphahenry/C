//reverse an array using a macro value

#include<stdio.h>
#define N 10
int main(){

    int a[N];


    //read the numbers
     printf("Enter 10 Numbers: ");

    for (int i = 0; i < N; i++)
    {
      
      scanf("%d", &a[i]);

    }

    //reverse the array

    for (int  i = N - 1; i >= 0; i--)
    {
        printf(" %d", a[i] );
    }
    
    




    return 0;
}