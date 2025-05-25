#include <stdio.h>

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 98;
    int b = 42;
    printf(" before swap: a=%d, b=%d \n", a, b);
    swap_int(&a, &b);
    printf("after swap :a=%d, b=%d \n", a, b);
    return (0);
}