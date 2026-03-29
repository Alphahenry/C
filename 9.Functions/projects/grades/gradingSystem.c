#include<stdio.h>
#define STR_LEN 80
#define N  11

//student details
char name[20];
int adm;
char sub[40];
int total_points;
char grade;
char sub[50] = {"Math, Eng, Kisw, Bio, Chem, phy, Agri/Bust, Hist/geo, Cre "};
int max_subjects = 7;
int sub_points[N];

int students_points();

void print_details();

int main(){

   

    print_details();
    return 0;
}

int students_points(){
    for (int i = 0; i < 11; i++)
    {
        
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