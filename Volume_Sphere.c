/*Program developed to calculate the volume of a sphere*/
#include <stdio.h>
int main(void)
{
    float radius, volume;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    volume = (4.0f/3.0f)*3.14f*radius*radius*radius; //Volume of a sphere formula, 4/3*pi*r^3
    printf("The Volume of the sphere with given radius %.3f is: %.3f\n", radius, volume);
    return 0;
}