/*
implement a basic calculator(+,-,*,/,%) using c
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    printf("Enter the expression (e.g. 5+3)");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("Result: %d\n", num1 / num2);
        else
            printf("Error: Division by zero\n");
        break;

    case '%':
        if (num2 != 0)
            printf("Result: %d\n", num1 % num2);
        else
            printf("Error: Modulo by zero\n");
        break;
    default:
        printf("invalid operator!");
    }

    return 0;
}
