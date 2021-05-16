#include <stdio.h>

void solve(void);

int main(void)
{
	solve();
	return 0;
}

void solve(void)
{
    long long int n, k, sum = 0, S;
    scanf("%lli\n", &n);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%lli", &k);
        sum += k;
    }
    S = (n * (n + 1) ) / 2;
    printf("%lli\n", S - sum);
}
	       

