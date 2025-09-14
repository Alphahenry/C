#include<stdio.h>



//function to sum array
int sum(int a[], int n){
    int total;
    for (int i = 0; i < n; i++)
    {
        total += a[i];

    }
    return total;
    
}

int main(){

    int result = sum((int []){9,8,6,5,3}, 5);
    printf("The result is: %d", result);

    return 0;
}