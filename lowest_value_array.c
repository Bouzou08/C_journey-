#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 5, 6, 8, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    int min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("the lowest value in the array %d \n", min);
}