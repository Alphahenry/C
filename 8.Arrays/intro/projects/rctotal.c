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
    int row_sum = 0;;

    printf("The sum of rows is: ");
    //sum the row1
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j< 5; j++)
        {
            row_sum = row_sum + myarr[i][j];
            
        }
          printf(" %d", row_sum);
    }
  
    

    




    return 0;
}