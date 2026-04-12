//function with argument and return type

#include<stdio.h>


int check_max(int a, int b);

int main(){
    int x , y;
    int max;

    printf("Enter two integers: ");
    scanf("%d,%d", &x,&y);
     
    max = check_max(x, y);
    printf("The largest is: %d", max);


    return 0;
}

int check_max(int a, int b){
    int equal = 0;
    if (a > b) {
        return a;
    }else if (b > a) {
       return  b;
    }else {
        return equal;
    }

}