#include <stdio.h>

typedef enum
{
    IDLE,
    AUTH,
    MENU,
    WITHDRAW,
    EXIT
} enum_state;

int main()
{
    int pin, amount;
    int balance = 500;
    int running = 1;
    int input_pin = 1234;
    enum_state state;

    while (running)
    {
        switch (state)
        {
        case IDLE:
        {
            printf("Enter 'i' to insert your card: ");
            char ch;
            scanf(" %c", &ch);
            if (ch == 'i')
            {
                state = AUTH;
            }
            break;
        }

        case AUTH:
        {
            printf("Enter your PIN: ");
            scanf("%d", &pin);
            if (pin == input_pin)
            {
                state = MENU;
            }
            else
            {
                printf("Invalid PIN. Try again!\n");
                state = IDLE;
            }
            break;
        }

        case MENU:
        {
            printf("\n=== ATM MENU ===\n");
            printf("1. Check Balance\n");
            printf("2. Withdraw\n");
            printf("3. Exit\n");
            printf("Choose an option: ");
            int menu_choice;
            scanf("%d", &menu_choice);

            if (menu_choice == 1)
            {
                printf("Your balance is: %d\n", balance);
                state = MENU;
            }
            else if (menu_choice == 2)
            {
                state = WITHDRAW;
            }
            else if (menu_choice == 3)
            {
                state = EXIT;
            }
            else
            {
                printf("Invalid option. Try again.\n");
                state = MENU;
            }
            break;
        }

        case WITHDRAW:
        {
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if (amount <= balance)
            {
                balance -= amount;
                printf("Withdrawal successful! New balance is: %d\n", balance);
            }
            else
            {
                printf("Insufficient funds.\n");
            }
            state = MENU;
            break;
        }

        case EXIT:
        {
            printf("Thank you for using the ATM. Goodbye!\n");
            running = 0;
            break;
        }
        }
    }

    return 0;
}
