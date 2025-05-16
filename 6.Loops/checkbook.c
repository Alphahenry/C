#include<stdio.h>
/*Balancing a checkbook*/
int main(){
    int command;
    float balance = 0.0f, credit, debit;
    //accounting balancing book
    printf("Commands: clear = 0;  credit = 1; debit = 2");
    printf("balance = 3, exit = 0\n\n ");


    //infinite loop
    for(;;){
        printf("Enter command: ");
        scanf("%d", &command);
        switch (command)
        {
            //initial balance
        case 0:
            balance = 0.0f;
            break;
        case 1:
           printf("Enter credit: ");
           scanf("%f", &credit);
           balance += credit;

        case 2:
           printf("Enter amount of debit: ");
           balance -= debit;
           break;

        case 3:
           printf("crrent balance : %f", balance);
           
           break;

        case 4:
        return 0;
          
        default:
            break;
        }
    }
    


    return 0;
}