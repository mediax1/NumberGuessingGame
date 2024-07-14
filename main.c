#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

int main() {
    srand(time(0));

    int random_number = (rand() % 10) + 1;
    int guess, guesstime = 0;

    printf(CYAN "Welcome to the Number Guessing Game!\n" RESET);

    do {
        printf(YELLOW "Enter your guess: " RESET);
        scanf("%d", &guess);
        guesstime++;

        if (guess < random_number) {
            printf(RED "Your guess is too low!\n" RESET);
        } else if (guess > random_number) {
            printf(RED "Your guess is too high!\n" RESET);
        }
        
    } while (guess != random_number);
    
    printf(GREEN "Congratulations! Your guess is correct!\n" RESET);
    printf(CYAN "Number of attempts: %d\n" RESET, guesstime);

    return 0;
}
