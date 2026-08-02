#include<stdio.h>

struct  bank_details{
    char acc_name[20];
    long int account_num;
    float balance;
    char type_acc[10];
};


int main(){
    struct bank_details cust= {"Alpha Mutuma", 25545184, 50000000, "savings"};
    
    printf("Customer details: \n");

    printf("\n%s \n%ld \n%f\n %s \n", cust.acc_name,cust.account_num,cust.balance, cust.type_acc);

return 0;

}