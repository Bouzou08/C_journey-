#include <stdio.h>

int main()
{

    int arr[] = {1, 2, 10, 20, 3, 7, 9};
    int userNumber;

    printf("enter a number to search:");
    scanf("%d", &userNumber);

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == userNumber)
        {
            printf("number is found : %d:", userNumber);
            break;
        }
        else
        {
            printf("number is not found : %d", userNumber);
        }
    }
}