#include <stdio.h>
#include <string.h>

void _puts(char *str)
{
    while (*str)
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
