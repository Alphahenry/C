//program to find smallest to largest of 4 integers 
#include<stdio.h>




int main(){

    int a,b,c,d;
    int first, second,third, fourth;

    printf("Enter 4 integers: ");
    scanf("%d,%d,%d,%d", &a,&b,&c,&d);

    
    if ((a > b) && (c < b)  && (c > d))

    {
        first = a;
        second = b;
        third = c;
        fourth = d;

        printf("%d,%d,%d,%d\n", fourth,third,second,first);
    }
    if ((b > a) && (c < a) && (d > c)  )
    {
        first = b;
        second = a;
        third = c;
        fourth = d;

         printf("%d,%d,%d,%d\n", fourth,third,second,first);

    }
    if ((c > b) && (a < b) && (d < a))
    {
        first = c;
        second = b;
        third = a;
        fourth = d;

         printf("%d,%d,%d,%d\n", fourth,third,second,first);
    }
    if ((d > c) && (b < c) && (a <b))
    {
        first = d;
        second = c;
        third = b;
        fourth = a;

         printf("%d,%d,%d,%d\n", fourth,third,second,first);
    }
    
    
    

    

    return 0;
}