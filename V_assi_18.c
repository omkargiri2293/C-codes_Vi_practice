/*
Write a C Program to read a 2D array of size 3x3 and print the matrix.
*/
#include <stdio.h>

int main()
{

    int arr[3][3];

    printf(" enter elements in matrix ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}