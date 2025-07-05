#include<stdio.h>

//define a constant

#define N 10

int main(){

    int a[10];
    int i;

    //read in an array
    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++){
        

        scanf("%d", &a[i]);
    }

    //reverse the array
    for ( i = N -1; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }
    

    return 0;
}