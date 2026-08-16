//pointer to structure

#include<stdio.h>



//creating a struct of items in a shop

struct Item
{
    char name[10];
    int  weight_kg;
    float amount;
};

struct Item shopping1 = {"Sugar", 2, 160};

int main(){

    struct Item *p = &shopping1;

    printf("The shopping included: Item: %s,weight(kg): %d, Amount: %f\n",p->name, p->weight_kg,p->amount);

    



    return 0;
}