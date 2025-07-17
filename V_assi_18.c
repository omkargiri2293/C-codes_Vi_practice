/*
Write a C Program to read a 2D array of size 3x3 and print the matrix.
*/
#include <stdio.h>

int main()
{

    int arr[3][3];

    printf(" enter elements in matrix \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Matrix[%d][%d]= ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
            /*The `\t` in the string is an escape sequence that represents a tab character.
             When used in functions like `printf`, it inserts a horizontal tab space,
              which helps in aligning output into columns or creating indentation. 
              For example, printing `printf("Hello\tWorld\n");
              would display **Hello    World** with some space between the words.*/
        }
        printf("\n");
    }
    return 0;
}