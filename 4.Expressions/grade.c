#include<stdio.h>
int main(){
    //grading system

   int num_grade;
   char  gradeA = 'A',gradeB ='B', gradeC = 'C', gradeD = 'D', gradeF = 'F';

    printf("Enter numerical grade: ");
    scanf("%d", &num_grade);


    //check grade
    if (num_grade >= 90 && num_grade <=100 )
    {
        printf("letter grade is: %c\n",gradeA);
    }
    else if (num_grade >= 80 && num_grade < 90)
    {
        printf("letter grade is: %c\n",gradeB);
    }
    else if (num_grade>= 70 && num_grade < 80)
    {
        printf("letter grade is: %c\n",gradeC);
    }
    else if (num_grade >= 60 && num_grade < 70)
    {
        printf("letter grade is: %c\n",gradeD);
    }
    else
    {
        printf("letter grade is: %c\n",gradeF);
    }
    
    
    
    
    
    return 0;
}