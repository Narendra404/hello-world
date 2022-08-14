#include <stdio.h>

int is_prime(long long int x);

int main(void)
{
    long long int n,first, second, prime, i = 1;
    scanf("%lli", &n);
    
    while ((n - 2) > 0) {
        first = (6 * i) - 1;
        second = (6 * i) + 1;
        if (is_prime(first) == 1) {
            prime = first;
            n--;
        }
        if (is_prime(second) == 1) {
            prime = second;
            n--;
        }
        i++;
    }

    printf("%lli\n", prime);
    return 0;
}

int is_prime(long long int x)
{
    long long int i;
    for (i = 2; i * i <= x; ++i) {
        if ((x % i) == 0) {
            return 0;
        }
    }

    return 1;
}
