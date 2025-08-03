//program that reads 5x5 array of integers and prints row totals and column totals
#include<stdio.h>

int main(){
    //declare array variable
    int myarr[5][5];

   


    for (int i = 0; i < 5; i++)
    {

         for (int j = 0; j < 5; j++)
        {
               printf("Enter values in the array at [%d[%d]: ", i,j);
               scanf("%d", &myarr[i][j]);
        }
        printf("\n");
        
    }
    




    return 0;
}