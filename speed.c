/*Program to calculate the speed of an object*/
#include <stdio.h>
int main()
{
    float d, t, v;
    printf("[SPEED=DISTANCE/TIME]\n");
    printf("\n");
    printf("Enter the distance covered (in meters): ");
    scanf("%f", &d);
    printf("Enter the time taken (in seconds): ");
    scanf("%f", &t);
    v= d/t;
    printf("The object is moving with a speed of %.2f m/s", v);
    return 0;
}