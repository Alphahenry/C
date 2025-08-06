//program that reads 5x5 array of integers and prints row totals and column totals
#include<stdio.h>
#define r 5
#define c 5

int main(){
    //declare array variable
    int myarr[r][c];

   


    for (int i = 0; i < r; i++)
    {

         for (int j = 0; j < c; j++)
        {
               printf("Enter values in the array at [%d[%d]: ", i,j);
               scanf("%d", &myarr[i][j]);
        }
        printf("\n");
        
    }
   

    printf("The sum of rows is: ");
    //sum the row1
    for (int i = 0; i < r; i++)
    
    {
       int row_sum = 0;
        for (int j = 0; j< c; j++)
        {
            row_sum = row_sum + myarr[i][j];
            
            
        }
          printf(" %d", row_sum);
    }
    printf("\n");
  //sum the columns
   
  
  printf("The sum of columns is : ");
  for (int j = 0; j < c; j++)
  {
    int column_sum = 0;
    for (int i = 0; i < r; i++)
    {
      column_sum = column_sum + myarr[i][j];
    }
    printf(" %d", column_sum);
  }
  

    
    return 0;
}