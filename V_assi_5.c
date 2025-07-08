/*
write a c program to store n elements in an array and print them
*/

#include <stdio.h>

int main()
{

    int n;
    printf("enter number of elements to store in an array:\n");
    scanf("%d", &n);

    int arr[n];

    printf("enter the elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("elements you entered are :\n");

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=%d", i, arr[i]);
    }
    return 0;
}