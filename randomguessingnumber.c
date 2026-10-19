/*Name : Cyrus Kiiru
 Admission : BCS-05-0551/2026*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess;
    int attempts = 0;

    
    srand(time(0));
    secret_number = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have picked a number between 1 and 20. Try to guess it.\n");

    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Please enter a valid integer.\n");
            while (getchar() != '\n'); // clear buffer
            continue;
        }

        attempts++;

        if (guess > secret_number) {
            printf("Too high!\n");
        } else if (guess < secret_number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("It took you %d attempts to guess correctly.\n", attempts);
        }
    } while (guess != secret_number);

    return 0;
}
