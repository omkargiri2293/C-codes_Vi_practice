/*
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char username[100];
    printf("Enter username: ");
    scanf("%s", username);

    int len = strlen(username);

    // Rule 1: Length check
    if (len < 6 || len > 15)
    {
        printf("Invalid: Length must be 6 to 15 characters.\n");
        return 0;
    }

    // Rule 2: Start with letter
    if (!isalpha(username[0]))
    {
        printf("Invalid: Must start with a letter.\n");
        return 0;
    }

    // Rule 3: Valid characters and at least one letter
    int has_letter = 0;
    for (int i = 0; i < len; i++)
    {
        if (!(isalnum(username[i]) || username[i] == '_'))
        {
            printf("Invalid: Only letters, digits, and underscores allowed.\n");
            return 0;
        }
        if (isalpha(username[i]))
        {
            has_letter = 1;
        }
    }

    if (!has_letter)
    {
        printf("Invalid: Must contain at least one letter.\n");
        return 0;
    }

    printf("Valid username: %s\n", username);
    return 0;
}
