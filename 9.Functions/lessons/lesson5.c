//function with no argument but a return type

#include <stdio.h>




int sum();


int main(){
     int s = sum();
    printf("the sum is %d\n", s);
    
    return 0;

}

int sum(){
    int a,b;

    printf("Enter values for a and b: ");
    scanf("%d,%d", &a,&b);

    int sum = a + b;
    return  sum;
}
