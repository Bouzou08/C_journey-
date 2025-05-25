#include <stdio.h>
#include <string.h>

char *str_cpy(char *dest, char *src)
{
    char *temp = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return temp;
}

int main()
{
    char s1[100];
    char *ptr;

    ptr = str_cpy(s1, "first solve the problem\n");
    printf("%s", s1);
    printf("%s", ptr);
}