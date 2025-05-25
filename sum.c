#include <stdio.h>

int main()
{
    int num1, num2;
    double operation;
    char operator;

    printf("enter first number: ");
    scanf("%d", &num1);

    printf("enter second number: ");
    scanf("%d", &num2);

    printf("enter operator: ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        operation = num1 + num2;
        printf("%lf", operation);
        break;
    case '-':
        operation = num1 - num2;
        printf("%lf", operation);
        break;
    case '*':
        operation = num1 * num2;
        printf("%lf", operation);
        break;
    case '/':
        if (num2 == 0)
        {
            printf(" error : cannot divide by zero.\n ");
        }
        else
        {
            operation = num1 / num2;
            printf("%lf", operation);
        }
        break;

    default:
        printf("invalid operator.\n ");
        break;
    }
}