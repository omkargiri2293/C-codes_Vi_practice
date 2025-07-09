/*
write a c program to read n number of values in an array and display in reverse order
*/

#include <stdio.h>

int main()
{
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array in reverse : ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    printf("\n");
    return 0;
}
