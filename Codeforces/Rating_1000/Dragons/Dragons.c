#include <stdio.h>

void solve(void);

int main(void)
{
    solve();
}

void solve(void)
{
    int n, s;
    scanf("%d %d", &s, &n);

    int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    int t = s;

    while(1)
    {
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if ((t > arr[i][0]) && (arr[i][0] != 0))
            {
                t += arr[i][1];
                arr[i][0] = 0;
                arr[i][1] = 0;
                flag++;
            }
        }
        
        if (flag == 0)
        {
            int flag2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i][0] != 0)
                {
                    flag2++;
                }
            }

            if (flag2 == 0)
            {
                printf("YES\n");
                break;
            }
            else
            {
                printf("NO\n");
                break;
            }
        }
    }
}
