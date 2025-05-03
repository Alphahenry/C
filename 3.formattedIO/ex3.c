#include<stdio.h>

int main(){


    int GSI, group_identifier, Publisher_code, Item_no, check_digit;

    printf("Enter ISBN num(xxx-x-xxx-xxxxx-x):\n");
    scanf("%d-%d-%d-%d-%d",&GSI,&group_identifier,&Publisher_code,&Item_no,&check_digit);


    printf("GSI: %d\ngroup_identifier: %d\nPublisher_code: %d\nitem_no: %d\ncheck_digit: %d", GSI,group_identifier,Publisher_code,Item_no,check_digit);
    

    return 0;
}