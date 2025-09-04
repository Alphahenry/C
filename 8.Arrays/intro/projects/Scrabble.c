#include<stdio.h>
#include<ctype.h>
#define N  26

int main(){
    //declare a array of 26 char

    char Alpha_bet[N]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W',
                       'X','Y','Z'};

    //start of game points = 0;

    int sum_points = 0;
    //array to store a wod

     printf("Enter a word: ");

    // char word = toupper(ch);
    
    //character from user

    char ch;

    while ((ch= getchar()) != '\n')
    {
    switch (toupper(ch))
    {
        case 'A':case 'E':case 'I':case 'L':case 'N':case 'O':case 'R':case 'S':case 'T':case 'U':
        sum_points += 1;
            break;


        case 'D':case 'G':
        sum_points += 2;
        break;


        case 'B': case 'C':case 'M':case 'P':
        sum_points += 3;
        break;

        case 'F': case 'H':case 'V':case 'W': case 'Y':
        sum_points += 4;
        break;

        case 'K':
        sum_points += 5;
        break;

        case 'J':case 'X':
        sum_points += 8;
        break;

        case 'Q': case 'Z':
        sum_points += 10;
        break;


    
        default:
            break;
    }
    }

    printf("scrabble value : %d", sum_points);
    
    
}