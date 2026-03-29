#include<stdio.h>

//student details
char name[20];
int adm;
int total_points;
char grade;

char *subjects[] = {"Math", "Eng", "Kisw", "Bio", "Chem", "phy", "Agri/Bust", "Hist/geo", "Cre"};


int max_subjects = 7;
int sub_points[9];

int students_points();

void print_details();

int students_points(){
    
    char **ptr = &subjects[0];

    for (int  i = 0; i < 9; i++)
    {
        
        printf("Enter grade for subject:  %s\n",*(ptr + i));
        
        
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


