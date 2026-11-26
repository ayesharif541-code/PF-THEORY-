
 
int main(void)
{
    long long n;
    int count = 0;
 
    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1 || n < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }
 
    while (n >= 10)
    {
        long long product = 1;
        while (n > 0)
        {
            product *= n % 10;   
            n /= 10;             
        }
        n = product;
        count++;
    }
 
    printf("Persistence = %d\n", count);
    return 0;
}