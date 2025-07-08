/*
write a program to find the greatest of 3 numbers
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter three numbers = ");
    scanf("a=%d b=%d c=%d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("/n a = %d is greatest of 3 numbers", a);
    }
    else if (b >= a && b >= c)
    {
        printf("/n b = %d is greatest of 3 numbers", b);
    }
    else
    {
        printf("/n c = %d is greatest of 3 numbers", c);
    }
}