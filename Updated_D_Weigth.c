/*Program to calculate the dimensional weight of a box with user-input dimensions*/
#include <stdio.h>
#define INCHES_PER_POUND 166
int main(void)
{
    int height, width, length, volume, weight;
    printf("Enter Box Height: ");
    scanf("%d", &height);
    printf("Enter Box Width: ");
    scanf("%d", &width);
    printf("Enter Box Length: ");
    scanf("%d", &length);
    volume=height*width*length;
    weight=(volume+INCHES_PER_POUND-1)/INCHES_PER_POUND;
    printf("Given Dimensions (H x W x L): %d x %d x %d\n", height, width, length);
    printf("Volume: %d\n", volume);
    printf("Dimensional Weight: %d\n", weight);
    printf("----Program Completed----\n");
    return 0;
}