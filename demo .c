#include<stdio.h>

int main()
{
    int choice;
    int again;
    float quantity;
    float totalPrice = 0;
    float applePrice=80 , bananaPrice=60 , grapesPrice=80;

    int apple=1, banana=1 , grapes=1;

    do{

        printf("welcome to my fuit shop!");
        
        if (apple)
        printf("1.Apple\n");

        if (banana)
        printf("2.Banana\n");
        
        if (grapes)
        printf("3.Grapes\n");
       

        printf("please select a fruit (1-3): ");
        scanf("%d",&choice);


        switch(choice){
            if(apple){
                case 1:
                printf("how much kg you want to buy:");
                scanf("%f\n" , &quantity);
                totalPrice += applePrice*quantity;
                printf("you selected apple:%.2f\n", quantity);
                apple=0;
                break;
            }

            if(banana){
                case 2:
                printf("how much kg you want to buy:");
                scanf("%f\n" , &quantity);
                totalPrice += bananaPrice*quantity;
                printf("you selected banana:%.2f\n", quantity);
                banana=0;
                break;
            }

            if(grapes){
                case 3:
                printf("how much kg you want to buy:");
                scanf("%f\n" , &quantity);
                totalPrice += grapesPrice*quantity;
                printf("you selected grapes:%.2f\n", quantity);
                grapes=0;
                break;
            }

            if(!apple && !banana && !grapes){
                printf("all fruits are already purchased\n");
                break;
            }

            printf("do you want to keep shopping(y=yes / n=No):");
            scanf(" %c", &again);
        }
    } while(again == 'y' || again == 'Y');
    
    printf("thank you for shopping with us!\n");
    printf("total bill: rs %.2f \n", totalPrice);
    return 0;


}