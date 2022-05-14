#include <stdio.h>

int main (void)
{
    long long int n, i, fact;
    scanf("%lli",&n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if ((i + 1) % 6 == 0 || (i - 1) % 6 == 0)
            {
                fact = i;
            }
        }
    }

    printf("%lli\n", fact);
}

