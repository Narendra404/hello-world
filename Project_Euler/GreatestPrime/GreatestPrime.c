#include <stdio.h>

int isprime(long long int n);

int main (void)
{
    long long int n, t , max = 0;
    scanf("%lli",&n);

    for (long long int i = 2; i * i <= n; i++)
    {
        t = n / i;
        if (n % i == 0 && isprime(i) == 1)
        {
            if (isprime(t) == 1)
            {
                if (t > max)
                {
                    max = t;
                }
            }
            else
            {
                if (i > max)
                {
                    max = i;
                }
            }
        }
    }

    printf("%lli\n", max);

    return 0;
}

int isprime(long long int n)
{
    for (long long int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

