#include <stdio.h>

int main() 
{
    int choice;
    char again;
    float quantity;
    
    do
    {
         printf("fruit shop\n");
         printf("1. apple\n");
         printf("2. Banana\n");
         printf("3. Grapes\n");

        printf("Please select a fruit (1-3): ");
        scanf("%d", &choice);

        printf("how many kg do you want to buy? ");
        scanf("%f", &quantity);

        switch (choice) {
            case 1:
            printf("You selected apple : %.2f kg\n", quantity);
            break;
            case 2:
            printf("You selected Banana : %.2f kg\n", quantity);
            break;
            case 3:
            printf("You selected Grapes : %.2f kg\n", quantity);
            break;
            default:
            printf("Invalid selection\n");
            break;
        }
        printf("Do you want to keep shopping? (y for yes, n for no): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');

    printf("Thank you for shopping with us!\n");
    
    return 0;
}
