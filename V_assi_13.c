/*
Implement a function to count the frequency of each element of an array using pointers.
*/

#include <stdio.h>

void countfrequency(int *arr, int n);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i); // Using pointer input
    }

    countfrequency(arr, n);
}

void countfrequency(int *arr, int n)
{
    int visited[n]; // to keep track of visited element

    for (int i = 0; i < n; i++)
    {
        visited[i] = 0; // initializing each element visited to 0
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) == *(arr + j)) // arr[i] is same as *(arr + i)
            {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times \n", *(arr + i), count);
    }
}
