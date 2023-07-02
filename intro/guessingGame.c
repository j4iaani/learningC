#include <stdio.h>

int main () {

printf("************************************\n");
printf("Wellcome to this silly guessing game\n");
printf("************************************\n");

int number = 27;

int guess;
printf("guess: %d", guess);
int victory = 0;
int attempts = 1;
double score = 1000;

while(victory == 0){

    printf("\nAttemps %d \n", attempts);
    printf("What number will you try?\n");
    scanf("%d", &guess);

    int negative = (guess < 0);

    if(negative){
        printf("Sorry honey, you can't try negative numbers here!\n");

        continue;
    }

    int hit = (number == guess);
    int bigger = (guess > number);

    if(hit){
        printf("Congratulations, nice guess\n");

        victory = 1;

    } else if(bigger){
        printf("Your guess is bigger than the right number! Try again\n");   
    } else {
        printf("Your guess is smaller than the right number! Try again\n");   
        }
        
    attempts = attempts + 1;
    double lostscore = (guess - number) / 2;
    score = score - lostscore;

    } 
    printf("End of the game!\n");
    printf("Your final score: %.1f\n", score);
    
}


