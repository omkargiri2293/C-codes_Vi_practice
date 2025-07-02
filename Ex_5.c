/*
check if a string is a palindrome
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ispalindrome(char string[]);

int main(void)
{
    // some example strings
    char string1[] = "not a palindrome!";
    char string2[] = "abccba";
    char string3[] = "abcdcba";

    // check if each string is a palindrome and report the results
    if (ispalindrome(string1))
        printf("%s\n- is a palindrome\n", string1);
    else
        printf("%s\n- is not a palindrome\n", string1);
    printf("\n");

    if (ispalindrome(string2))
        printf("%s\n- is a palindrome\n", string2);
    else
        printf("%s\n- is not a palindrome\n", string2);
    printf("\n");

    if (ispalindrome(string3))
        printf("%s\n- is a palindrome\n", string3);
    else
        printf("%s\n- is not a palindrome\n", string3);
    return 0;
}

bool ispalindrome(char string[])
{
    int len = strlen(string);
    int middle = len / 2;

    for (int i = 0; i < middle; i++)
    {
        if (string[i] != string[len - i - 1])
        {
            return false;
        }
    }
    return true;
}