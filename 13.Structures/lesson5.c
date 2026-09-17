//defining a structure{nickname}type
#include<stdio.h>


typedef struct {

    char name[20];

    int cost;

   

} Car;



int main(){
   Car car1 = {"BMW", 5000000};

   printf("car Info:\n");

   printf("name %s\n", car1.name);
   printf("cost %d", car1.cost);


    return 0;
}