
#include <stdio.h>

int main(void)
{
    int n, i;
    double num, largest, smallest;

    printf("How many numbers? ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input: N must be a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        if (scanf("%lf", &num) != 1)
        {
            printf("Invalid input: please enter a real number.\n");
            return 1;
        }

        if (i == 1)
        {
            largest = num;
            smallest = num;
        }
        else
        {
            if (num > largest)  largest = num;
            if (num < smallest) smallest = num;
        }
    }

    printf("Largest  = %.2f\n", largest);
    printf("Smallest = %.2f\n", smallest);
    return 0;
}