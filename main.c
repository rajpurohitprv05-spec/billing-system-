#include <stdio.h>

int main() 
{
    int choice;
    char again;
    float quantity = 0;
    float totalBill = 0;
    float applePrice = 120, bananaPrice = 60, grapesPrice = 150;
    
    int apple = 1 , banana = 1, grapes = 1;
    do
    {
         printf("Welcome to the fruit shop!\n");

         if(apple)
         printf("1. apple (Rs %.2f/kg)\n", applePrice);

         if(banana)
         printf("2. Banana (Rs %.2f/kg)\n", bananaPrice);

         if(grapes)
         printf("3. Grapes (Rs %.2f/kg)\n", grapesPrice);

        printf("select from above: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if(apple)
            {
                printf("how many kg do you want to buy? ");
                scanf("%f", &quantity);
                if(quantity < 0)
                {
                    printf("Invalid quantity\n");
                    break;
                }
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
                if(quantity < 0)
                {
                    printf("Invalid quantity\n");
                    break;
                }
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
                if(quantity < 0)
                {
                    printf("Invalid quantity\n");
                    break;
                }
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

    printf("\n");
    printf("=========================================\n");
    printf("          fruit shop bill receipt        \n");
    printf("=========================================\n");
    printf("%-20s %10s %10s\n", "Item", "Quantity", "Price");
    printf("-----------------------------------------\n");
    if(quantity > 0){
        printf("%-20s %10.2f %10.2f\n", "Apple", quantity, quantity * applePrice);
    }
    if(quantity > 0){
        printf("%-20s %10.2f %10.2f\n", "Banana", quantity, quantity * bananaPrice);
    }
    if(quantity > 0){
        printf("%-20s %10.2f %10.2f\n", "Grapes", quantity, quantity * grapesPrice);
    }
    printf("-----------------------------------------\n");
    printf("%-20s %10s %10.2f\n", "Total", "", totalBill);
    printf("=========================================\n");

    return 0;
}
