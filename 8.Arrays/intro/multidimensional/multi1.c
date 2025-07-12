//initializing A MULTIDIMENSIONAL ARRAY
#include<stdio.h>

int main(){
    
    int m[3] [3] = {
                    {1,2,3},
                    {4,5,6},
                    {1,2,3},
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j<3; j++){
            printf("%d",m[i][j]);
         
        }
        printf("\n");
    }
 

    return 0;
}