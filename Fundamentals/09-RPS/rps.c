#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // to make it random
    // Title
    printf("==== Rock Paper Scissors! ====\n");

    // data
    int choice;
    int r = rand() % 3 + 1;

    // input data
    printf("Insert your choice (R=1, P=2, S=3): ");
    scanf("%i", &choice);

    // process
    if (r == choice)
    {
        printf("It's a TIE!");
    }

    // winnings
    else if (r == 1 && choice == 2)
    {
        printf("You WIN!");
    }
    else if (r == 2 && choice == 3)
    {
        printf("You WIN!");
    }
    else if (r == 3 && choice == 1)
    {
        printf("You WIN!");
    }

    // losings
    else if (choice == 1 && r == 2)
    {
        printf("You LOSE!");
    }
    else if (choice == 2 && r == 3)
    {
        printf("You LOSE!");
    }
    else if (choice == 3 && r == 1)
    {
        printf("You LOSE!");
    }
}