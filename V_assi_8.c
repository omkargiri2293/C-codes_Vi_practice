/*
write c program to find the sum of all elements of the array
 */

#include <stdio.h>

int main()
{

    int n;

    printf("enter no of elements to store =");

    scanf("%d", &n);

    int arr[n];
    printf("enter the elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
    }
    printf("sum of elements in an array= %d", sum);

    return 0;
}