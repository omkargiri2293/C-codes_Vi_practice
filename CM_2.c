/*
code marathon Q2

Bit manipulation
a) Get an integer input from the user. Print the number of 1s in the integer.
b) Write a function to set a bit , clear a bit, and toggle a bit of an integer.
   Take bit position to modify and operation to be performed from user ...
*/

#include <stdio.h>

// Function to print binary of a 32-bit number
void print_binary(int num)
{
    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0)
            printf(" "); // Optional: group in 4 bits
    }
    printf("\n");
}

void count_ones()
{
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num)
    {
        count += num & 1;
        num >>= 1;
    }
    printf("Number of 1s in binary: %d\n", count);
}

void bit_modify()
{
    int num, pos, op;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter bit position (0-31): ");
    scanf("%d", &pos);
    printf("Enter operation (1: Set, 2: Clear, 3: Toggle): ");
    scanf("%d", &op);

    printf("Original number: %d\n", num);
    printf("Original binary: ");
    print_binary(num);

    switch (op)
    {
    case 1:
        num |= (1 << pos);
        break;
    case 2:
        num &= ~(1 << pos);
        break;
    case 3:
        num ^= (1 << pos);
        break;
    default:
        printf("Invalid operation\n");
        return;
    }
    printf("modified number: %d\n", num);
    printf("modified binary: ");
    print_binary(num);
}

int main()
{
    count_ones();
    bit_modify();
    return 0;
}
