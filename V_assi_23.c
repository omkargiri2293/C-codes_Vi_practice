/*
Write a C program to find the length of a string without using library functions.
*/

/* ANSWER - we know every string end with '\0' null character */

#include <stdio.h>
int main()
{
    char str[100];
    int length = 0;

    printf("enter string : ");
    scanf("%s", str);

    // loop until '\0'

    while (str[length] != '\0')
    {
        length++;
    }

    printf("length of string is %d", length);
    return 0;
}