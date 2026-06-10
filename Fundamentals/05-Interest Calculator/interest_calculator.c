#include <stdio.h>
#include <math.h>

int main()
{
    // variables
    float start;
    float interest;
    int time;
    char type;
    float result;

    // title
    printf("==== INTEREST CALCULATOR ====");
    printf("\nThis program will help you count your interest!");

    // inputs
    printf("\n\nEnter starting money: ");
    scanf("%f", &start);

    printf("\n\nEnter interest percent (Per year): ");
    scanf("%f", &interest);

    printf("\n\nEnter total time (in years): ");
    scanf("%i", &time);

    printf("\n\nEnter type of Interest, Simple or Compound ('s'/'c'): ");
    scanf(" %c", &type);

    // process
    interest = interest / 100.0;
    if (type == 's')
    {

        result = start + (start * interest * time);
    }
    else if (type == 'c')
    {
        int times;
        printf("\nHow many times a year is the interest compounded: ");
        scanf("%i", &times);
        result = start * pow(1 + (interest / times), (times * time));
    }

    // print
    printf("\nResult is: %f", result);
}