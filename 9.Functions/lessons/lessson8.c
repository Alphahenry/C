#include<stdio.h>


int avg(int marks[], int a);
 int marks[5] = {34,56,99,39,88};

int main(){
     int average_of_total = avg(marks, 5);
     printf("The avaerage is %d\n", average_of_total);
    return 0;
}

int avg(int marks[], int a){
    int sum;
    int average;

   for (int i=0; i < a; i++) {
        sum = sum + marks[i];
   }
     average =   sum /a;
     return average;

}