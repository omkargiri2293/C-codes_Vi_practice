/*
 Implement a function to find the second largest element in an array using pointers.
*/

#include <stdio.h>
void secondLargestElement(int *arr, int n);

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

    secondLargestElement(arr, n);

    return 0;
}

void secondLargestElement(int *arr, int n)
{
    int first = *arr;
    int second = -1;

    prinf("second largest element = ");
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) > first)
        {
            second = first;
            first = *(arr + i);
        }
        else if (*(arr + i) < first && *(arr + i) > second || second = -1)
        {
            second = *(arr + i);
        }
    }
}
