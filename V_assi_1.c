/*
write a program to find the greatest of 3 numbers
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    // Input from user
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Logic to find the greatest
    if (a >= b && a >= c)
    {
        printf("The greatest number is: %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("The greatest number is: %d\n", b);
    }
    else
    {
        printf("The greatest number is: %d\n", c);
    }

    return 0;
}