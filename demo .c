#include <stdio.h>

int main()
{
    int choice;
    char again = 'y';

    float appleQty = 0, bananaQty = 0, grapesQty = 0;
    float quantity;

    float applePrice = 120;
    float bananaPrice = 60;
    float grapesPrice = 150;

    float totalBill = 0;

    int apple = 1, banana = 1, grapes = 1;

    do
    {
        printf("\nFruit Shop\n");

        if(apple)
            printf("1. Apple (Rs %.2f/kg)\n", applePrice);

        if(banana)
            printf("2. Banana (Rs %.2f/kg)\n", bananaPrice);

        if(grapes)
            printf("3. Grapes (Rs %.2f/kg)\n", grapesPrice);

        printf("Select a fruit: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(apple)
                {
                    printf("How many kg? ");
                    scanf("%f", &quantity);

                    appleQty = quantity;
                    totalBill += quantity * applePrice;
                    apple = 0;
                }
                break;

            case 2:
                if(banana)
                {
                    printf("How many kg? ");
                    scanf("%f", &quantity);

                    bananaQty = quantity;
                    totalBill += quantity * bananaPrice;
                    banana = 0;
                }
                break;

            case 3:
                if(grapes)
                {
                    printf("How many kg? ");
                    scanf("%f", &quantity);

                    grapesQty = quantity;
                    totalBill += quantity * grapesPrice;
                    grapes = 0;
                }
                break;

            default:
                printf("Invalid choice!\n");
        }

        if(!apple && !banana && !grapes)
            break;

        printf("Continue shopping? (y/n): ");
        scanf(" %c", &again);

    } while(again == 'y' || again == 'Y');

    printf("\n");
    printf("=================================\n");
    printf("          FRUIT RECEIPT\n");
    printf("=================================\n");

    if(appleQty > 0)
        printf("Apple   %.2f kg   Rs %.2f\n",
               appleQty, appleQty * applePrice);

    if(bananaQty > 0)
        printf("Banana  %.2f kg   Rs %.2f\n",
               bananaQty, bananaQty * bananaPrice);

    if(grapesQty > 0)
        printf("Grapes  %.2f kg   Rs %.2f\n",
               grapesQty, grapesQty * grapesPrice);

    printf("---------------------------------\n");
    printf("Total Bill      Rs %.2f\n", totalBill);
    printf("=================================\n");
    printf("Thank You! Visit Again.\n");

    return 0;
}