/*
Implement a function to find the second smallest element in an array using pointers.
*/
#include <stdio.h>

void secondSmallestElement(int *arr, int n)
{
    if (n < 2)
    {
        printf("Array must have at least two elements.\n");
        return;
    }

    int first = *arr;
    int second = -1;

    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) < first)
        {
            second = first;
            first = *(arr + i);
        }
        else if (*(arr + i) > first && (*(arr + i) < second || second == -1))
        {
            second = *(arr + i);
        }
    }

    if (second == -1)
    {
        printf("There is no second smallest element (all elements may be equal).\n");
    }
    else
    {
        printf("Second smallest element is %d\n", second);
    }
}

int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i); // pointer style input
    }

    secondSmallestElement(arr, n);

    return 0;
}
