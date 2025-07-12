/*
c program to copy the elements on one array to another array
*/

#include <stdio.h>

int main()
{
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    // Input elements into arr1
    printf("Enter %d elements for the first array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    // Display elements of arr2
    printf("Elements copied to the second array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");
    return 0;
}
