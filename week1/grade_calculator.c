#include <stdio.h>

int main()
{
    // amount of categories
    int category;
    float final_grade;

    // title, desc
    printf("==== Grade Calculator ====");
    printf("\nThis program will help you calculate your grades!\nYou will be asked to provide the name, weight, and amount of tasks within each category.\n");
    // input
    printf("First, please tell me how much categories of graded tasks are there?\nExamples of graded tasks are like: Assignments, Midterms, just assignments that have different weights to your final grade!\nPlease enter the amount here: ");
    scanf("%d", &category);
    // create arrays for data of the tasks based on amount of tasks

    int amounts[category];
    char names[category][20];
    int weights[category];
    float contributions[category];
    // input all the different tasks and categories with a loop!
    for (int i = 0; i < category; i++)
    {
        printf("Please enter the name of Category %d: ", i + 1);
        scanf(" %[^\n]", names[i]); // makes it include whitespaces (i should implement this in the student profile too)
        printf("Please enter the weight of tasks in Category %d (in percent, ex. 25, 15, 20)\nNote: Do not include the percent symbol\nWeight: ", i + 1);
        scanf("%d", &weights[i]);
        printf("Please enter the amount of tasks in Category %d: ", i + 1);
        scanf("%d", &amounts[i]);
        // scores (based on amount of tasks)
        float scores[amounts[i]];
        for (int j = 0; j < amounts[i]; j++)
        {
            printf("Please enter the score of %s %d", names[i], j + 1);
            scanf("%f", &scores[j]);
        }
        // count average of category and store
        float total = 0;
        for (int a = 0; a < amounts[i]; a++)
        {
            total = total + scores[a];
        }
        contributions[i] = (total / amounts[i]) * (weights[i] / 100.0);
    }

    // count final grade
    final_grade = 0;
    for (int k = 0; k < category; k++)
    {
        final_grade = final_grade + contributions[k];
    }

    printf("Final calculated grade is: %f", final_grade);
}