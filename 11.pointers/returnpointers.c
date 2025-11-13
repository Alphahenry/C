//pointer as a return value

#include<stdio.h>

int *max( int *a, int *b){

    if( *a > *b){
        return a;
    }
    else
    {
        return b;
    }
    
}

int main(){

    int *p, i,j;

    printf("Enter the value of i: ");
    scanf("%d", &i);

    printf("Enter the value of j: ");
    scanf("%d", &j);

    p = max(&i, &j);

    printf("The largest is: %d", *p);
    



return 0;
}