/*
Implement a function to find the maximum and minimum elements in an array using pointers.
*/
#include <stdio.h>

void minMax(int *arr, int n);
int main()
{

    int n;
    printf("enter no elements in array ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements in an array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i); // pointer style input
    }

    minMax(arr, n);
    return 0;
}

void minMax(int *arr, int n)
{
    int min = *arr;
    int max = *arr;

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) < min)
        {
            min = *arr + 1;
        }
        if (*(arr + i) > max)
        {
            max = *arr + i;
        }
    }
    printf("minimum element= %d\n", max);
    printf("maximum element= %d", min);
}