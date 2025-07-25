/*
Implement a function to find the frequency of characters.

Example:

Input the string: This is a test string

Input the character to find frequency: i

Expected Output: The frequency of 'i' is: 3
*/

#include <stdio.h>

#define MAX 256

void freqOfChar(char *str)
{
    int freq[MAX] = {0};

    while (*str != '\0')
    {
        freq[(unsigned int)*str]++;

        str++;
    }

    printf("characters frequency : ");
    for (int i = 0; i < MAX; i++)
    {
        if (freq[i] > 0)
        {
            printf("'%c'=%d\n", i, freq[i]);
        }
    }
}

int main()
{
    char input[100];

    printf("enter a string \n");
    fgets(input, sizeof(input), stdin);

    freqOfChar(input);
    return 0;
}