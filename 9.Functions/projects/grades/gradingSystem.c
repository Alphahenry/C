#include<stdio.h>
#define N  11

//student details
char name[20];
int adm;
int total_points;
char grade;
char subjects;
char *sub[] = {"Math", "Eng", "Kisw", "Bio", "Chem", "phy", "Agri/Bust", "Hist/geo", "Cre"};
int max_subjects = 7;
int sub_points[N];

int students_points();

void print_details();

int students_points(){
    for (int  i = 0; i < N; i++)
    {
        printf("Enter grade for subject %c", sub[i]);
    }
    
}
void print_details(){

    printf("Enter students details: \n");
    scanf("%s,%d,%d,%c", &name,&adm,&total_points,&grade);

    printf("Name: %c",name );
    printf("Adm : %d", adm);
    printf("points:%d ", total_points);
    printf("Mean Grade: %c \n", grade);
}

int main(){

   
   students_points();
   //print_details();
    return 0;
}


