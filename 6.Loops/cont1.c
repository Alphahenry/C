#include<stdio.h>
int main(){
    int n =0;
    int sum = 0;
    int i;

    while (n < 10)
    {
        printf("Enter I: ");
        scanf("%d", &i);
        if(i == 0){
            continue;
        }
        sum += 1;
        n++;

    }
    
    return 0;
}