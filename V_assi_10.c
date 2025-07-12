/*
write c program to count the total number of duplicate elements in an array
*/

#include <stdio.h>

int main()
{

    int n, count = 0;

    printf("enter no of elements:");
    scanf("%d", &n);

    int arr[n];

    printf("enter elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("no of duplicate elements in an array = %d", count);
    return 0;
}