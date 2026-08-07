#include <stdio.h>

int main()
{
    // READ N
    int N;
    printf("Insert Amount of Data: ");
    scanf("%d", &N);

    // IF N is less than or equal TO 0
    if (N <= 0)
    {
        // DISPLAY N must be greater than 0
        printf("N must be greater than 0\n");
    }

    // ELSE
    else
    {
        // READ firstNumber
        int firstNumber;
        printf("Enter First Number: ");
        scanf("%d", &firstNumber);

        // SET everything
        int minimum = firstNumber;
        int maximum = firstNumber;
        int sum = firstNumber;
        int evenCount = 0;
        int oddCount = 0;
        double average;

        if (firstNumber % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }

        // FOR count from 2 to N
        for (int i = 1; i < N; i++)
        {
            // READ number
            int num;
            printf("Insert Data number %i: ", i + 1);
            scanf("%i", &num);

            // IF number is greater than maximum
            if (num > maximum)
            {
                // SET maximum to num
                maximum = num;
            }
            // IF number is lesser than minimum
            else if (num < minimum)
            {
                // SET minimum to num
                minimum = num;
            }
            // ADD num to sum
            sum = sum + num;

            // IF num is odd or even
            if (num % 2 == 0)
            {
                // ADD 1 to even
                evenCount++;
            }
            else
            {
                // ADD 1 to odd
                oddCount++;
            }
        }
        // SET average to sum DIVIDED BY N
        average = (double)sum / N;

        // DISPLAY EVERYTHING
        printf("Maximum is %i\n", maximum);
        printf("Minimum is %i\n", minimum);
        printf("Sum is %i\n", sum);
        printf("Average is %.2f\n", average);
        printf("There are %i odd numbers\n", oddCount);
        printf("There are %i even numbers\n", evenCount);
    }
}