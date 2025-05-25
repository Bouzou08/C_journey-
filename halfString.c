#include <stdio.h>
#include <string.h>

void puts_half(char *str)
{
    int length;
    length = strlen(str);

    if (length % 2 == 0)
    {
        int half_odd = length / 2;
        while (half_odd < length)
        {
            printf("%c", str[half_odd]);
            half_odd++;
        }
    }
    else
    {
        int half_even = (length + 1) / 2;
        while (half_even < length)
        {
            printf("%c", str[half_even]);
            half_even++;
        }
    }
}

int main()
{
    char *str;
    str = "01234567892";
    puts_half(str);
}