
#include <stdio.h>

int main(void)
{
    long long a, b, small, large, total = 0;

    printf("Enter two numbers: ");
    if (scanf("%lld %lld", &a, &b) != 2 || a < 0 || b < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    small = (a < b) ? a : b;
    large = (a < b) ? b : a;

    while (small >= 1)
    {
        if (small % 2 == 1)     
            total += large;

        small /= 2;              
        large *= 2;              
    }

    printf("Product = %lld\n", total);
    return 0;
}