#include <stdio.h>

int main() 
{
    int choice, quantity;
    
    printf("fruit shop\n");
    printf("1. apple\n");
    printf("2. Banana\n");
    printf("3. Grapes\n");

    printf("Please select a fruit (1-3): ");
    scanf("%d", &choice);

    printf("how many kg do you want to buy? ");
    scanf("%d", &quantity);

    switch (choice) {
        case 1:
            printf("You selected apple : %d kg\n", quantity);
            break;
        case 2:
            printf("You selected Banana : %d kg\n", quantity);
            break;
        case 3:
            printf("You selected Grapes : %d kg\n", quantity);
            break;
        default:
            printf("Invalid selection\n");


    }

    printf("Do you want to keep shopping? (y for yes, n for no): ");
    scanf(" %c", &choice);

    if (choice == 'y' || choice == 'Y')
    {
        printf("nAvailable fruits:\n");

        if(choice != 1)
        {
            printf("1. apple\n");
        }
        else if(choice != 2)
        {
            printf("2. Banana\n");
        }
        else if(choice != 3)
        {
            printf("3. Grapes\n");
        }   
        /* code */
    }

    else
    {
        printf("Thank you for shopping with us!\n");
    }
    

    return 0;
}
