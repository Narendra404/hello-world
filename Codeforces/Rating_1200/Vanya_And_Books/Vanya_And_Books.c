#include <stdio.h>

void solve(void);

int main(void)
{
    solve();
    return 0;
}

void solve(void)
{
    unsigned long long n;
    scanf("%llu", &n);

    unsigned long long t = 9;
    unsigned long long count = 0;
    int flag = 1;

    while (1) {
        
        if (n <= t) {
            
            count += flag * (n - (t / 10));
            break;

        } else {
            
            count += flag * (t - (t / 10));
            t = (t * 10) + 9;
            flag++;

        }
    }

    printf("%llu\n", count);
}
