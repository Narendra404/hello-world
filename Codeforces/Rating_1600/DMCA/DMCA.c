#include <stdio.h>
#include <math.h>

void solve(void);
unsigned int SumOfDigits(unsigned int x);

int main(void)
{
    solve();
    return 0;
}

void solve(void)
{
    unsigned int n;
    scanf("%u", &n);

    unsigned int t = n;

    while ((t % 10) != t) {
        
        t = SumOfDigits(t);
    }

    printf("%u\n", t);
}

unsigned int SumOfDigits(unsigned int x)
{
    unsigned int y = x;
    unsigned int sum = 0;

    while(y > 0)
    {
        sum += y % 10;
        y = y / 10;
    }

    return sum;
}
