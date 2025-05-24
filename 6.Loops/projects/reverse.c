#include<stdio.h>

int main(){
    int number;
    int rev_num = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        rev_num = rev_num * 10 + number %10;
        number = number/10;
    }

    printf("revrsed nmber is : %d", rev_num);
    


    return 0;
}