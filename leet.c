#include <stdio.h>

char *leet(char *str)
{
    char *leetres = "aAeEoOtTlL";
    char *leet = "4433007711";

    int i, j;
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < leetres[j]; j++)
        {
            if (str[i] == leetres[j])
            {
                str[i] = leet[j];
            }
        }
    }
}
int main()
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", s);
    return (0);
}