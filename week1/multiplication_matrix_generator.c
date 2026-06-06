#include <stdio.h>

int main()
{
    // variables
    int number;

    // title
    printf("==== Multiplication Matrix Generator ====");
    printf("\nThis program will take any number that you input and generate a multiplication matrix from 1 to your number!");

    // input
    printf("\nPlease enter your number of choice: ");
    scanf("%d", &number);

    // generate tables
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}