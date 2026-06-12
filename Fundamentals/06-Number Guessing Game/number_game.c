#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // random seed
    // random number
    int r = rand() % 100 + 1; // turns any number into a number within 1-100
    int guess;
    int guesses = 0;

    // title
    printf("==== NUMBER GUESSING GAME ====\n");

    // check if correct
    while (true)
    {
        // request guess
        printf("Enter your guess (1-100): ");
        scanf("%i", &guess);
        guesses++;
        if (guess == r)
        {
            printf("Congratulations, you guessed the number in %i tries!", guesses);
            break;
        }
        else if (guess < r)
        {
            printf("The number is HIGHER than %i\n", guess);
        }
        else if (guess > r)
        {
            printf("The number is LOWER than %i\n", guess);
        }
    }
    return 0;
}