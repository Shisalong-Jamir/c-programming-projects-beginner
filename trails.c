/*This Program is used to display int and float values in different formats*/
#include <stdio.h>
int main()
{
    int i;
    float x;
    i=40;
    x=432.234f;
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
    printf("\"Hello!\"\n");
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    return 0;
}