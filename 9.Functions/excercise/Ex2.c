#include<stdio.h>    

int is_it_in_range(int x, int y, int n);

int main(){

    int n, x,y;
    printf("Enter range: ");
    scanf("%d", &n);

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);


    printf("The result is: %d", is_it_in_range(x,y,n));

    return 0;
}

int is_it_in_range(int x, int y, int n){
    if ((x >= n-1 && x < n -1) && (y < n-1 ))
    {
      return 1;

    }

    else{
        return 0;
    }
    
}





