/*
 Implement a function to reverse a string using pointers.
*/
#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (start < end)
    {
        // Swap characters
        temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers
        start++;
        end--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); // Note: scanf reads up to the first whitespace

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
