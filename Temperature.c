/*Program to convert Temperature from Fahrenheit to Celsius*/
#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)
int main(void)
{
    float fahrenheit, celsius;
    printf("FAHRENHEIT TO CELSIUS CONVERTER\n");
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius=(fahrenheit-FREEZING_POINT)*SCALE_FACTOR;
    printf("Celsius Equivalent: %.1f\n", celsius);
    printf("----Temperature Successfully Converted----\n");
    return 0;
}