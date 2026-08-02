//structure Arrays
#include<stdio.h>

struct student{

    int adm_no;
    char name[20];
    float marks;
};


int main(){

//declare a variable struct of 40 students
struct student s[4];

//enter info for each student
printf("enter info for each student: ");

for (int i = 0; i < 3; i++)
{
    scanf("%d,%s,%f", &s[i].adm_no,&s[i].name,&s[i].marks);
}

printf("These are the new students: \n");

for(int i = 0; i< 3; i++){
    printf("students info: %d,%s,%f\n", s[i].adm_no,s[i].marks,s[i].name);
}




    return 0;
}
