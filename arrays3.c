#include <stdio.h>

void print_array(int *a, int n)
{
    int i;
    for (i = 0; i < 5; i++)

    {
        if (i == 4)
        {
            printf("%d", a[i]);
            break;
        }
        printf("%d,", a[i]);
    }
}

int main()
{
    int array[5];
    array[0] = 98;
    array[1] = 402;
    array[2] = 198;
    array[3] = 298;
    array[4] = 1024;

    print_array(array, 5);
}