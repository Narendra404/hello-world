#include <stdio.h>

void solve(void);

int main(void)
{
    solve();
    return 0;
}

void solve(void)
{
    int n;
    scanf("%d", &n);

    int arr[n][3];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    int x = 0, y = 0, z = 0;

    for (int i = 0; i < n; ++i) 
    {
        x += arr[i][0];
        y += arr[i][1];
        z += arr[i][2];
    }
    
    if ((x == 0) && (y == 0) && (z == 0)) 
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
