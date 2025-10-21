#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_NUM 100

//DECLARE EXTER VARIABLE
int secret_number;

//function prototypes
void initialize_number_generator(void);
void choose_new_secret_number();
void read_guesses();


int main(){
    char command;

    printf("guess the secret number between 1 nd %d.\n\n", MAX_NUM);

    initialize_number_generator();

    do
    {
        choose_new_secret_number();
        printf("A new nmumber has been chosen: ");
        read_guesses();
        printf("Play again? Y/N");
        scanf("%c", &command);
        printf("\n");

    } while (command == 'Y' || command == 'y');
    

    return 0;
}

//initialize random number using time of day
void initialize_number_generator(void){
    srand((unsigned) time(NULL));
}

//randomly select a number between 1 and max number and stores it in secret number
void choose_new_secret_number(){
    secret_number = rand() % MAX_NUM + 1;
}

//read guesses
void read_guesses(){
    int guess;
    int num_guesses;

    for(;;){
        num_guesses++;
        printf("Enrter guess: ");
        scanf("%d",&guess);

        if(guess == secret_number){
            printf("You wn in %d guesses", num_guesses);
        }else if (guess < secret_number)
        {
            printf("Number is too low");
        }else
        {
           printf("number is too high");
        }
        
        
    }
}



