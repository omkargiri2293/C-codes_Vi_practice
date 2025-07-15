/*
Write a C program to print all unique elements in an array.
*/

#include <stdio.h>

int main()
{

    int n;
    printf("enter no of elements of array= ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("unique elements in array = ");
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}