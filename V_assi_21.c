/*
Write a C program to find the sum of rows and columns of a matrix.
*/

#include <stdio.h>

int main()
{
    int rows, columns;

    printf("enter no of rows = ");
    scanf("%d", &rows);

    printf("enter no of columns = ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    printf("enter elements in matrix  \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;

        for (int j = 0; j < columns; j++)
        {
            rowSum += matrix[i][j];
        }
        printf("sum of row %d = %d\n", i + 1, rowSum);
    }
    for (int i = 0; i < columns; i++)
    {
        int colSum = 0;

        for (int j = 0; j < rows; j++)
        {
            colSum += matrix[i][j];
        }
        printf("sum of column %d = %d\n", i + 1, colSum);
    }
}