/*
Write a C program to input a string and print it.
*/

#include <stdio.h>

int main()
{

    char string[50];

    printf("enter string \n");
    /*
    You don’t need the & (address-of operator) when reading strings with scanf.
    The name of the array (string) already acts as a pointer.
    */

    scanf("%s", string);

    // To capture the full line, use:
    // fgets(string, sizeof(string), stdin);

    printf("%s\n", string);

    return 0;
}