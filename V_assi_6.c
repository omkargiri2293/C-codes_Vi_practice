/*
write c program to store any elements in an array and print those using pointers
*/
#include <stdio.h>

int main()
{

    int n;
    printf("enter number of elements to store in an array:\n");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("enter the elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + 1));
    }

    printf("elements you entered are :\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d", *(ptr + 1));
    }
    return 0;
}