/*
sum the values in an array
*/
#include <stdio.h>
int sum(int array[], int length);

int main(void)
{
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int a2[] = {100};
    int a3[] = {22, 33, 44, 55, 66, 77, 88, 99, 11};

    printf("sum of array1= %d", sum(array1, 10));
    printf("a2 sum =%d", sum(a2, 1));
    return 0;
}

int sum(int array[], int length)
{

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return sum;
}