#include <stdio.h>

int main()
{
    // variables
    int choice;
    float num1, num2, result;
    // Title
    printf("==== CALCULATOR ====");
    // instructions
    printf("\nOPTIONS:\n1. Addition\n2. Substraction\n3. Multiplication\n4. Division");

    // inputs
    printf("\nEnter choice (ex. 1 for Addition): ");
    scanf("%d", &choice);

    printf("\n Enter first number: ");
    scanf("%f", &num1);

    printf("\n Enter second number: ");
    scanf("%f", &num2);

    // conditions (for each operation)
    if (choice == 1)
    {
        result = num1 + num2;
    }
    else if (choice == 2)
    {
        result = num1 - num2;
    }
    else if (choice == 3)
    {
        result = num1 * num2;
    }
    else if (choice == 4)
    {
        result = num1 / num2;
    }
    else
    {
        printf("Invalid Choice");
        return 0;
    }

    // output
    printf("Result is: %f", result);
    return 0;
}