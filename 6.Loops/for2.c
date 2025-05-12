#include<stdio.h>
int main(){
    
    //print a table of  squares between 0 and 11
    
    int num;
    printf("Enter num of squares: ");
    scanf("%d", &num);

    for (int sq = 0; sq < num; sq++)
    {
        printf("%10d%10d\n", sq, sq * sq);
    }
    
    return 0;
}