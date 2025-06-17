#include<stdio.h>

int main(){

    int char_1;


    printf("%c", char_1);
    
    //declare variables
    int i,n;//n is no of entries
    int count = 0;

    i = 1;
  //titleof the table

    printf("This is the square tables\n");
    //request user for num of entries

    printf("Enter number of entries: ");
    scanf("%d",&n);
    
    printf("Number\t\tSquare\n");
    printf("_________________________\n");
    while (i <= n)
    {
        printf("%5d%13d\n", i, i*i);

        i++;
        count++;

        if (count == 24)
        {
            continue;
            printf("press Enter to continue:  ");
            char_1 = getchar();
        }
        

    }
    return 0;
}