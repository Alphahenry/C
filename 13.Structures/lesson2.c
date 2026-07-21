#include<stdio.h>


struct student{
    int adm_no;
    char name[20];
    float marks;

};


int main(){
   struct student s = {5000, "Alpha", 99.1};

   //printing info from the struct data type

   printf("Student role no is: \n");
   printf("%d \n", s.adm_no);

    return 0;
}