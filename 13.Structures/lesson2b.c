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

    printf("\n%s %ld %f %s \n", cust.acc_name,cust.account_num,cust.balance, cust.type_acc);







    // scanf("Account Name : %c", &customer.acc_name);
    // scanf("Account Number: %d", &customer.account_num);
    // scanf("Account Balance: %f", &customer.balance);
    // scanf("Type of Account: %c", &customer.type_acc);


}