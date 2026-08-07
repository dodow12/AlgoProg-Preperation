#include <stdio.h>

double add(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a - b;
}

double mul(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

int main()
{
    // READ a, b, choice
    double a;
    printf("Insert First Number: ");
    scanf("%lf", &a);

    double b;
    printf("Insert Second Number: ");
    scanf("%lf", &b);

    int choice;
    printf("OPERATIONS MENU:\n1 = addition\n2 = subtraction\n3 = multiplication\n4 = division\n");
    printf("Insert your choice (1-4): ");
    scanf("%i", &choice);

    // CHECK OPERATORS
    if (choice == 1)
    {
        printf("Result is: %.2f", add(a, b));
    }

    else if (choice == 2)
    {
        printf("Result is: %.2f", sub(a, b));
    }

    else if (choice == 3)
    {
        printf("Result is: %.2f", mul(a, b));
    }

    else if (choice == 4)
    {
        if (b == 0)
        {
            printf("Cannot divide by 0 !");
        }
        else
        {
            printf("Result is: %.2f", divide(a, b));
        }
    }

    else
    {
        printf("Invalid choice!");
    }
}