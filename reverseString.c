#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
    int l = 0;
    int r = strlen(s) - 1;
    char t;

    while (l < r)
    {
        t = s[l];
        s[l] = s[r];
        s[r] = t;
        l++;
        r--;
    }
}

int main()
{
    char s[50] = "abcdef";
    print_rev(s);

    printf("%s", s);
}