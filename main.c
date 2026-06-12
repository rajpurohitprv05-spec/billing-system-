#include <stdio.h>

int main() 
{
    int choice;
    char again;
    float quantity;
    float totalBill = 0;
    float applePrice = 120, bananaPrice = 60, grapesPrice = 150;
    
    int apple = 1 , banana = 1, grapes = 1;
    do
    {
         printf("Welcome to the fruit shop!\n");

         if(apple)
         printf("1. apple\n");

         if(banana)
         printf("2. Banana\n");

         if(grapes)
         printf("3. Grapes\n");

        printf("Please select a fruit (1-3): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if(apple)
            {
                printf("how many kg do you want to buy? ");
                scanf("%f", &quantity);
                totalBill += quantity * applePrice;
                printf("You selected Apple : %.2f kg\n", quantity);
                 apple = 0;
            }
            else
                printf("Apple are alerady purchased\n");
            break;
        case 2:
            if(banana)            
            {
                printf("how many kg do you want to buy? ");
                scanf("%f", &quantity);
                totalBill += quantity * bananaPrice;
                printf("You selected Banana : %.2f kg\n", quantity);
                 banana = 0;
            }
            else
                printf("Banana are alerady purchased\n");
            break;
        case 3: 
            if(grapes)            
            {
                printf("how many kg do you want to buy? ");
                scanf("%f", &quantity);
                totalBill += quantity * grapesPrice;
                printf("You selected Grapes : %.2f kg\n", quantity);
                 grapes = 0;
            }
            else
                printf("Grapes are alerady purchased\n");
            break;
        default:
            printf("Invalid selection\n");      
            break;
        }

        if(!apple && !banana && !grapes)
        {
            printf("All fruits are purchased\n");
            break;
        }

        printf("Do you want to keep shopping? (y for yes, n for no): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');

    printf("Thank you for shopping with us!\n");
    printf("Total Bill: Rs %.2f\n", totalBill);

    return 0;
}
