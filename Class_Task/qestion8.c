
#include <stdio.h>

#define FACTOR (2.0 / 3.0)

int main(void)
{
    double x, y;
    int bounces = 0;

    printf("Enter starting height x: ");
    scanf("%lf", &x);
    printf("Enter target height y: ");
    scanf("%lf", &y);

    if (x <= 0 || y <= 0)
    {
        printf("Heights must be positive.\n");
        return 1;
    }

    while (1)
    {
        if (x < y)         
            break;
        x = x * FACTOR;     
        bounces++;
    }

    printf("Number of bounces = %d\n", bounces);
    return 0;
}