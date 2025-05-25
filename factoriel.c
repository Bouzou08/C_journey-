#include <stdio.h>
// this is a comment 
int main()
{
    int number, i;
    int fact = 1;
    printf("enter a number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("out of range .\n");
    }
    else
    {
        for (i = 1; i <= number; i++)
        {
            fact *= i;
        }
        printf("%d! = %d", number, fact);
    }
}
