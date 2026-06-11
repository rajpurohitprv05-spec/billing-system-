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

    return 0;
}
