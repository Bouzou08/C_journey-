#include<stdio.h>

int main()
{
    int number;
    printf("enter a number");
    scanf("%d",&number);

    if (number == 0){
        printf("%d is neutral.\n",number);
    }
    else{
         if ( number %2 == 0){
        printf("%d is even.\n",number);
    
    } else {
        printf("%d is odd .\n", number);
    }

    }

}