/*
Implement a function to count the total number of vowels or consonants in a string.
*/
#include <stdio.h>
#include <ctype.h> // for tolower()

void countVowelsConsonants(char *str, int *vowelCount, int *consonantCount)
{
    *vowelCount = 0;
    *consonantCount = 0;

    while (*str != '\0')
    {
        char ch = tolower(*str); // convert to lowercase for easier comparison

        if ((ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowelCount)++;
            else
                (*consonantCount)++;
        }
        str++; // move pointer to next character
    }
}

int main()
{
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer input (can read spaces too)

    countVowelsConsonants(str, &vowels, &consonants);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
