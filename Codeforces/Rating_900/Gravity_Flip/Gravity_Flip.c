#include <stdio.h>
#include <stdlib.h>

int comparator (const void * p1, const void * p2)
{
    return (*(int*)p1 - *(int*)p2);
}

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

    int arr[n];
    
    for (int i = 0; i < n; ++i) 
    {
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, n, sizeof(int), comparator);

    for (int i = 0; i < n; ++i) 
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
