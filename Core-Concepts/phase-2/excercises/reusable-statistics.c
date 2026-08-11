#include <stdio.h>

// read function
void readArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Insert data number %i", i + 1);
        scanf("%i", &array[i]);
    }
};

// calcsum function
int calcSum(int array[], int size)
{
    int sum = array[0];
    // traverse
    for (int i = 1; i < size; i++)
    {
        sum = sum + array[i];
    }

    // return
    return sum;
}

// calculate average
int calcAverage(int array[], int size)
{
    int sum = calcSum(array, size);
    float average = sum / size;

    // return
    return average;
}

// findMax
int findMax(int array[], int size)
{
    int Max = array[0];
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
int findMin(int array[], int size)
{
    int Min = array[0];

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
void printArray(int array[], int size)
{
    printf("Array: ");
    for (int i = 0; i < size - 1; i++)
    {
        printf("%i, ", array[i]);
    }
    printf("%i", array[size - 1]);
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
    int array[size];

    // READ array content
    readArray(array, size);

    while (running > 0)
    {
        printf("\n\nWelcome to the REUSABLE statistics library.");
        printf("INSTRUCTIONS:\n1 = View current array\n2 = Calculate sum of array\n3 = Calculate Average of array\n4 = Find Max of array\n5 = Find Min of array\n6 = Switch to a new array");

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
            printf("Sum is %i", calcSum(array, size));
        }

        // case3
        else if (choice == 3)
        {
            printf("\n");
            printf("Average is %i", calcAverage(array, size));
        }

        // case4
        else if (choice == 4)
        {
            printf("\n");
            printf("Max is %i", findMax(array, size));
        }

        // case5
        else if (choice == 5)
        {
            printf("\n");
            printf("Min is %i", findMin(array, size));
        }

        // case6
        else if (choice == 6)
        {
            readArray(array, size);
        }

        // else
        else
        {
            printf("Invalid choice");
            return 0;
        }
    }
}