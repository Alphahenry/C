#include<stdio.h>

#define S 5
#define Q 5

int main(){

  //declarer an array
  int arr[S][Q];

  //enter the grades

  for(int i = 0; i < S; i++)
  {
    for (size_t i = 0; i < Q; i++)
    {
        printf("Enter the grades in the array: [%d][%d]", S,Q);
        scanf("%s", &arr[S][Q]);
    }

    //calculate total score and average score perstudent

    for (int  i = 0; i < S; i++)
    {
      int total_score = 0;
      for (int j = 0; i < Q; i++)
      {
         total_score +=  arr[S][Q];

      }
      printf("Total score is: %d and the average is %d\n", total_score, total_score/5);
      
    }

    printf("\n");

    //average score, high score and low score for quizes

  for (int j = 0; j < Q; j++)
  {
    printf("The average score, high score and low score for quiz:", j + 1);
   int total_score = 0;
   int high_score = arr[0][i];
   int low_high_score = arr[0][i];
    for (int i = 0; i < S; i++)
    {
       total_score += arr[j][i];

       if (arr[j][i] > high_score)
       {
         high_score = arr[j][i];
       }
       if (arr[j][i] < low_high_score)
       {
         low_high_score = arr[j][i];
       }
       
       
    }
    
  }
  
    
    
  

    
  }

  

 
                                                                                


