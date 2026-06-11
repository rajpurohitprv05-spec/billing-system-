#include <stdio.h>

int main() {
    char Apple;
    char Banana;
    char Grapes;

    printf("Enter the quantity of Apple: ");
    scanf("%c", &Apple);
    printf("Enter the quantity of Banana: ");
    scanf(" %c", &Banana);
    printf("Enter the quantity of Grapes: ");
    scanf(" %c", &Grapes);
    
    return 0;
}