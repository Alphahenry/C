//how printf works
#include<stdio.h>

int main(){
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i,i,i,i);//this is the result|40|   40|40   |  040|

    printf("|%10.3f|%10.3e|%-10g|\n",x, x, x);//result : |   839.210| 8.392e+02|839.21    |

}