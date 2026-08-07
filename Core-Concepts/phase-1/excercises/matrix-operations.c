#include <stdio.h>

int main()
{
    // READ row and col
    int row;
    printf("Insert amount of rows: ");
    scanf("%i", &row);

    int col;
    printf("Insert amount of columns: ");
    scanf("%i", &col);

    // IF row and col outside of range (1-10)
    if (row > 10 || col > 10 || row < 1 || col < 1)
    {
        printf("Rows and Columns must be within range (1-10)");
    }

    // ELSE
    else
    {
        // declare matrix1,2,3
        int m1[row][col];
        int m2[row][col];
        int m3[row][col];

        // READ m1,m2
        printf("\nNow we will input values of Matrix1\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("Insert value of row %i column %i", i + 1, j + 1);
                scanf("%i", &m1[i][j]);
            }
        }

        printf("\nNow we will input values of Matrix2\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("Insert value of row %i column %i", i + 1, j + 1);
                scanf("%i", &m2[i][j]);
            }
        }

        // SET m3 to m1 + m2
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                m3[i][j] = m1[i][j] + m2[i][j];
            }
        }

        // DISPLAY THEM ALL
        printf("Matrix 1: \n| ");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%i | ", m1[i][j]);
            }
            printf("\n| ");
        }

        printf("Matrix 2: \n| ");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%i | ", m2[i][j]);
            }
            printf("\n| ");
        }

        printf("Result: \n| ");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%i | ", m3[i][j]);
            }
            printf("\n| ");
        }
    }
}