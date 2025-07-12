/*
code marathon Q3
implement follwing functions for Array operations
i. SecondLargestElement();
ii. SecondSmallestElement();
iii. DuplicatElements();
...
*/

#include <stdio.h>

// Function to find second smallest element
void SecondSmallestElement(int arr[], int n)
{
    int i, j, temp;

    // Sort the array
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    // Find second smallest (skip duplicates)
    for (i = 1; i < n; i++)
    {
        if (arr[i] != arr[0])
        {
            printf("Second Smallest: %d\n", arr[i]);
            return;
        }
    }

    printf("No second smallest found.\n");
}

// Function to find second largest element
void SecondLargestElement(int arr[], int n)
{
    int i, j, temp;

    // Sort the array
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    // Find second largest (skip duplicates)
    for (i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[n - 1])
        {
            printf("Second Largest: %d\n", arr[i]);
            return;
        }
    }

    printf("No second largest found.\n");
}

// Function to find duplicate elements
void DuplicateElements(int arr[], int n)
{
    int i, j, flag = 0;

    printf("Duplicate elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                flag = 1;
                break; // To avoid printing same duplicate again
            }
        }
    }

    if (!flag)
        printf("No duplicates found.\n");
}

// Main function
int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    SecondSmallestElement(arr, n);
    SecondLargestElement(arr, n);
    DuplicateElements(arr, n);

    return 0;
}
