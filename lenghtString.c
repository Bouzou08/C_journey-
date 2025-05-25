#include <stdio.h>
#include <string.h>

int _strlen(char *s)
{
    int length = 0;

    while (s[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char *str;
    int len;

    str = "my first string";
    len = _strlen(str);

    printf("%d", len);
    return 0;
}
