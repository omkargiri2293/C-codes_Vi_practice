/*
Implement a function to copy one string to another string using pointers.
*/

#include <stdio.h>

void copyString(char *source, char *destination)
{

    while (*source != '\0')
    {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}
int main()
{
    char str1[100], str2[100];

    printf("enter str1 : ");
    scanf("%s", str1);

    copyString(str1, str2);

    printf("Copied string: %s\n", str2);
}