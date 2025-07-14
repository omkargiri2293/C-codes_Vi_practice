/*
Write a C Program to sort a given array in:
Ascending Order
Descending Order
*/
#include <stdio.h>

int main()
{

    int n;
    printf("enter number of elements in array ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements in array= ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp;

    /*  Step-by-step Execution:

    1st outer loop (i = 0):
    Compare arr[0] = 9 with arr[1] = 3 → 9 > 3 → swap
    → Array becomes {3, 9, 5}

    Compare arr[0] = 3 with arr[2] = 5 → 3 < 5 → no swap

    2nd outer loop (i = 1):
    Compare arr[1] = 9 with arr[2] = 5 → 9 > 5 → swap
    → Array becomes {3, 5, 9}
    */
    // Ascending order

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("array in ascending array ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    // descending order

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("array in decending order ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}