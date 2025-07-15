#include <stdio.h>

void separateOddEven(int *arr, int n)
{
    printf("Even elements: ");
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
            printf("%d ", *(arr + i));
    }

    printf("\nOdd elements: ");
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 != 0)
            printf("%d ", *(arr + i));
    }

    printf("\n");
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

    separateOddEven(arr, n);

    return 0;
}
