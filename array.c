#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello";
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }
    printf("%d", length++);
}
