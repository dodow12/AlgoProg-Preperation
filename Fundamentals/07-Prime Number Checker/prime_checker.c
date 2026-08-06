#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Title
    printf("==== Prime Number Checker ====\n");

    // data
    int number;
    bool prime = true;

    // input data
    printf("\nInsert a number: ");
    scanf("%i", &number);

    // check
    /*
    in order for a number to be prime, it means that the number can only be divided by itself and
    the number 1. Ex. 2, 3, 5, 7, ...
    */
    if (number == 1)
    {
        prime = false;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            prime = false;
            break;
        }
    }

    // output
    if (prime == true)
    {
        printf("%i is a Prime number", number);
    }
    else if (prime == false)
    {
        printf("%i is not a Prime number", number);
    }
}