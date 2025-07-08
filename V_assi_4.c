/*
write a c program which adds all numbers from 1 to N , except those which are divisible by 5
*/

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 != 0)
        {
            sum += i;
        }
    }

    printf("Sum of numbers from 1 to %d (excluding multiples of 5) is: %d\n", n, sum);

    return 0;
}
