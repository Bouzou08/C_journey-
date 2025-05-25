#include <stdio.h>

int changecase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char c = 'b';
    int result = changecase(c);
    printf("%d", result);
}
