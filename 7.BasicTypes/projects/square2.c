#include<stdio.h>

int main(){

    
    //declare variables
    int i,n;//n is no of entries

    printf("This is the square tables\n");
    //request user for num of entries

    printf("Enter number of entries: ");
    scanf("%d",&n);
    getchar(); //remove '\n' from buffer

    
    printf("Number\t\tSquare\n");
    printf("_________________________\n");
    for (i = 1; i<= n;i++)
    {
        printf("%5d%13d\n", i, i*i);
        if (i % 24 == 0)
        {
          printf("Press enter to continue: ");
          while(getchar() != '\n');
        }
        
    }
    return 0;
}