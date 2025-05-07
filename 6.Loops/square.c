/*Prigram that prints table of squares*/
#include<stdio.h>
int main(){

    //declare variables
    int i,n;//n is no of entries

    i = 1;
  //titleof the table

    printf("This is the square tables\n");
    //request user for num of entries

    printf("Enter nu of entries: ");
    scanf("%d",&n);
    printf("Number\t\tSquare\n");
    printf("_________________________\n");
    while (i <= n)
    {
        printf("%5d%13d\n", i, i*i);

        i++;

    }
    


}