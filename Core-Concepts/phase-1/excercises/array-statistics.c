#include <stdio.h>

int main()
{
    // READ N
    int N;
    printf("Enter amount of Data: ");
    scanf("%i", &N);

    // IF N is less than 1 or greater than 100
    if (N < 1 || N > 100)
    {
        printf("Number must be within range (1-100)");
    }

    // ELSE
    else
    {
        // SET array[N]
        int array[N];

        // READ array[0]
        printf("Enter Data number 1: ");
        scanf("%i", &array[0]);

        // SET everything
        int maximum = array[0];
        int minimum = array[0];
        int sum = array[0];
        int evenCount = 0;
        int oddCount = 0;

        // IF array[0] is even or odd
        if (array[0] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        // FOR count 1 to N-1
        for (int i = 1; i < N; i++)
        {
            // READ array[count]
            printf("Insert data number %i: ", i + 1);
            scanf("%i", &array[i]);

            // SET everything
            if (array[i] > maximum)
            {
                maximum = array[i];
            }
            else if (array[i] < minimum)
            {
                minimum = array[i];
            }

            if (array[i] % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }

            sum = sum + array[i];
        }

        // SET average
        double average = (double)sum / N;

        // DISPLAY data in order
        for (int i = 0; i < N; i++)
        {
            printf("%i, ", array[i]);
        }

        // DISPLAY statistics
        printf("\nMaximum is %i", maximum);
        printf("\nMinimum is %i", minimum);
        printf("\nSum is %i", sum);
        printf("\nAverage is %.2f", average);
        printf("\nThere are %i even numbers", evenCount);
        printf("\nThere are %i odd numbers\n", oddCount);

        // DISPLAY data in reverse order
        for (int i = N - 1; i >= 0; i--)
        {
            printf("%i, ", array[i]);
        }
    }
}