#include <stdio.h>

// read function
void readArray(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Insert data number %i", i + 1);
        scanf("%lf", &array[i]);
    }
}

// calcsum function
double calcSum(double array[], int size)
{
    double sum = array[0];
    // traverse
    for (int i = 1; i < size; i++)
    {
        sum = sum + array[i];
    }

    // return
    return sum;
}

// calculate average
double calcAverage(double array[], int size)
{
    double sum = calcSum(array, size);
    double average = (double)sum / size;

    return average;
}

// findMax
double findMax(double array[], int size)
{
    double Max = array[0];
    // traverse
    for (int i = 1; i < size; i++)
    {
        if (array[i] > Max)
        {
            Max = array[i];
        }
    }

    // return
    return Max;
}

// findMin
double findMin(double array[], int size)
{
    double Min = array[0];

    // traverse
    for (int i = 1; i < size; i++)
    {
        if (array[i] < Min)
        {
            Min = array[i];
        }
    }

    // return
    return Min;
}

// print array
void printArray(double array[], int size)
{
    printf("Array: ");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%.2f, ", array[i]);
    }
    printf("%.2f", array[size - 1]);
}

int main()
{
    int choice;
    int running = 1;

    // READ array
    int size;
    printf("Insert size of Array: ");
    scanf("%i", &size);

    // declare array
    double array[size];

    // READ array content
    readArray(array, size);

    while (running > 0)
    {
        printf("\n\nWelcome to the REUSABLE statistics library.");
        printf("INSTRUCTIONS:\n1 = View current array\n2 = Calculate sum of array\n3 = Calculate Average of array\n4 = Find Max of array\n5 = Find Min of array\n6 = Switch to a new array\n7 = Stop.");

        // input choice
        printf("\nInsert your choice: ");
        scanf("%i", &choice);

        // case1
        if (choice == 1)
        {
            printf("\n");
            printArray(array, size);
        }

        // case2
        else if (choice == 2)
        {
            printf("\n");
            printf("Sum is %.2f", calcSum(array, size));
        }

        // case3
        else if (choice == 3)
        {
            printf("\n");
            printf("Average is %.2f", calcAverage(array, size));
        }

        // case4
        else if (choice == 4)
        {
            printf("\n");
            printf("Max is %.2f", findMax(array, size));
        }

        // case5
        else if (choice == 5)
        {
            printf("\n");
            printf("Min is %.2f", findMin(array, size));
        }

        // case6
        else if (choice == 6)
        {
            readArray(array, size);
        }

        // case7
        else if (choice == 7)
        {
            return 0;
        }

        // else
        else
        {
            printf("Invalid choice");
            return 0;
        }
    }
}