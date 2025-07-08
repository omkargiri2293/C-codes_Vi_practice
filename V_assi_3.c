/*
write a c program to find sum upto n numbers

*/

#include <stdio.h>

int main()
{

    int n, sum = 0;

    printf("enter n =");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("sum upto %d = %d\n", n, sum);

    return 0;
}