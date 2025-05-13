#include<stdio.h>

//finding cube: num, num*num*num

//puting infinity loop
int cube;
int main(){
for(;;){
    printf("Enter a number(enter zero to stop): ");
    scanf("%d",&cube);
    if (cube == 0)
    {
        break;
    }
    

    printf("The cube of the number is %d: ", cube * cube * cube);


}

    return 0;
}

