#include <stdio.h>

void solve(void);

int main(void)
{
    int t ;
    scanf("%d", &t);

    while(t--)
    {
        solve();
    }

    return 0;
}

void solve(void)
{
    int n, count1 = 0, count2 = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);

        if (m == 1)
        {
            count1++;
        }

        if (m == 2)
        {
            count2++;
        }
    }

    if (((count1 - 2 * (count2 % 2)) >= 0) && ((count1 - 2 * (count2 % 2)) % 2 == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
