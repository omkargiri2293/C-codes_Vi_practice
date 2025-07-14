/*

*/

#include <stdio.h>

int main()
{
    int num;
    char word[100];
    int i = 0;

    printf("Enter numbers (1–26 for letters, 0 = end word, -1 = end input):\n");

    while (1)
    {
        scanf("%d", &num);

        if (num == -1)
            break;
        else if (num == 0)
        {
            word[i] = '\0';      // End current word
            printf("%s ", word); // Print word
            i = 0;               // Reset for next word
        }
        else if (num >= 1 && num <= 26)
        {
            word[i++] = 'A' + num - 1; // Convert number to letter
        }
    }

    // Print last word if any
    if (i > 0)
    {
        word[i] = '\0';
        printf("%s", word);
    }

    return 0;
}
