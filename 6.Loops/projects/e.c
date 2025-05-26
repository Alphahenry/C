#include<stdio.h>
int main(){
    int e;

     int n;
    printf("Print the value of n: ");
    scanf("%d", &n);
    
    
   
    
    int series;

    for (int i = 0; i < n; i++)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }

        e = 1/n * 1/n;
        
        
    }

    
    printf("%d", e);
    
    return 0;
}