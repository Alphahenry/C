#include<stdio.h>




//function to return sum of array
int sum(int myarr[], int n){

    int sum_of_array;
    for (int i = 0; i < n; i++)
    {
        sum_of_array += myarr[i];
    }
    
    return sum_of_array;

}
int main(){
   
    int arry[20] = {};

    //fill the array
    for (int  i = 0; i < 20; i++)
    {
        arry[i] = i + 1;
    }
    
   int result =  sum(arry,20);
   printf("The sum of array is: %d\n", result);
    return 0;
}