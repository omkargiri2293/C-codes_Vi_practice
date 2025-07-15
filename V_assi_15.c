/*
Implement a function to separate odd and even integers of an array into separate arrays using pointers.
*/
#include <stdio.h>
void seperateOddEven(int *arr, int n);

int main()
{
    int n;
    printf("enter no elements in array ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements in an array ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i); // pointer style input
    }

    seperateOddEven(arr, n);

    return 0;
}

void seperateOddEven(int *arr, int n)
{
    int odd, even;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            printf("%d", *(arr + i));
        }
        else
        {
            printf("%d", arr + i);
        }
    }
}