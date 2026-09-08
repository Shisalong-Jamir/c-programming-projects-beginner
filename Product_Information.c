/*Program to format the product information entered by a user*/
#include <stdio.h>
int main()
{
    int Item, dd, mm, yyyy;
    float Unit_Price;
    printf("Enter the item number: ");
    scanf("%d", &Item);
    printf("Enter the unit price: ");
    scanf("%f", &Unit_Price);
    printf("Enter the purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    printf("Item \t Unit Price \t Purchase Date\n");
    printf("%d \t %.2f \t %d/%d/%d\n", Item, Unit_Price, dd, mm, yyyy);
    return 0;
}