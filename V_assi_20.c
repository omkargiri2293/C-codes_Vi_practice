/*
Write a C program for the subtraction of two matrices.
*/

#include <stdio.h>

int main()
{

    int rows, columns;

    printf("enter no of rows = ");
    scanf("%d", &rows);

    printf("enter no of columns = ");
    scanf("%d", &columns);

    int matrix1[rows][columns], matrix2[rows][columns], matrix3[rows][columns];

    printf("enter elements in matrix 1 \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("enter elements in matrix 2 \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // subtraction of matrices
    int sub[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // print subtraction
    printf("subtraction of matrices is \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
}