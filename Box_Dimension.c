/*Program to calculate the dimensional weight of a 10" x 12" x 8" box*/
#include <stdio.h>
int main(void)
{
    int height, width, length, volume, weight; //specify that the variables named here are integers
    height=8;
    width=12;
    length=10;
    volume=height*width*length; //in C,(*) is the multiplication operator
    weight=(volume+165)/166;
    printf("Given Dimensions: %d x %d x %d\n", height, width, length);
    printf("Volume (1st method): %d \n", volume); //This volume has been found by using the 'volume' variable
    printf("Volume (2nd method): %d \n", height*width*length); //This volume has been found by multiplying the three dimensions directly
    printf("Dimensional Weight: %d \n", weight);
    printf("----Program Completed----\n");
    return 0;
}