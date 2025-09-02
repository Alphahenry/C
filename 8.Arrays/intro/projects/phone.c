//phone number
#include<stdio.h>
#include<string.h>
#define N 14

int main(){


    //store phone number

    char  Phone_No [N] = "";
    int i;//counter
    printf("Hello user\n");
    printf("Please enter %d characters: \n", N);
    //get char using a loop
    for(i=0; i< N; i++){
       //ask user for charcters dstarting at 1 throught 15
       printf("Please enter character %d: ", i+1);
       Phone_No[i] = getchar();

       //clear input buffer
       while (getchar() != '\n');
       
    }
    Phone_No[i] = '\0';//terminate
    printf("%s", Phone_No);

 // PRINTING IN nUMERIC FORM
//declare an empty array of phone number in numeric form
  char num_form[N] = "";
 //LOOP THROUGH THE PHONE NUMBER
 for (int i = 0; i < N; i++)
 {
    switch (Phone_No[i])
    {
                case 'A': case 'B': case 'C':
                    putchar('2');
                    break;


                case 'D': case 'E': case 'F':
                putchar('3');
                break;

                case 'G': case 'H': case 'I':
                putchar('4');
                break;

                case 'J': case 'K': case 'L':
                putchar('5');
                break;

                case 'M': case 'N': case 'O':
                putchar('6');
                break;

                case 'P': case 'R': case 'S':
                putchar('7');
                break;

                case 'T': case 'U': case 'V':
                    putchar('8');
                    break;

                case 'W': case 'X': case 'Y':
                    putchar('9');
                    break;
                
                
                
                
                
                
                default:

    }

 }
 
  
    
    return 0;
}