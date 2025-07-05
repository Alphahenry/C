//designated array

#include<stdio.h>

int main(){
    int arr[15] ={ [2]= 9, [9] = 7, [13]= 48};


    for(int i = 0; i < 15; i++)
    printf("%d",arr[i] );

    return 0;
}