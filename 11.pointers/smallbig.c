
//program to choose largest and smallest integer.
#include<stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);


int main(){
    int b[N];
    int small;
    int big;
  
    printf("Enter %d Numbers: ", N);
    for (int  i = 0; i < N; i++)
    {
        scanf("%d", &b[i]);
    }
    
    max_min(b,N, &big,&small);

    printf("The largest is: %d\n", big);
    printf("The smallest is: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min){
  *max = *min = a[0];
   for (int i = 0; i < N; i++)
   {
      if (a[i] > *max)
      {
         *max = a[i];
      }
      else if (a[i] < *min)
      {
        *min = a[i];
      }
      
      
   }
   
   
}