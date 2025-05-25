#include <stdio.h>

void reset_to_98(int *n)
{
    *n = 98;
}

int main()
{
    int n = 402;
    printf(" number before reset %d \n", n);
    reset_to_98(&n);
    printf(" number after reset %d \n", n);
    return (0);
}