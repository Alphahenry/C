//Checking my computer's  max short int.//
/*Prigram that prints table of squares*/
#include<stdio.h>
int main(){

    //declare variables
    short i,n;//n is no of entries

    i = 1;
  //titleof the table

    printf("This is the square tables\n");
    //request user for num of entries

    printf("Enter number of entries: ");
    scanf("%hd",&n);
    
    printf("Number\t\tSquare\n");
    printf("_________________________\n");
    while (i <= n)
    {
        printf("%5hd%13hd\n", i, i*i);

        i++;

    }
    


}
//its 32761.after which integer overflow occurs