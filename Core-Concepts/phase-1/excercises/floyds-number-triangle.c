#include <stdio.h>

int main()
{
    // READ N
    int N;
    int start = 1;
    printf("Insert amount of rows: ");
    scanf("%i", &N);

    // IF N isn't a positive integer
    if (N < 1)
    {
        printf("It must be a positive integer!");
        return 0;
    }

    // ELSE
    printf("\nFloyd's Triangle of numbers with %i rows:\n", N);

    // NESTED LOOPS
    for (int rows = 1; rows <= N; rows++)
    {
        int r = rows;
        while (r != 0)
        {
            printf("%i ", start);
            start++;
            r--;
        }
        printf("\n");
    }
}