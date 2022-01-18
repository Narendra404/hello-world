#include <stdio.h>

void solve(void);
int lucky(int x);
int almost_lucky(int y);

int main(void)
{
    solve();
    return 0;
}

void solve(void)
{
    int n;
    scanf("%d", &n);

    if (lucky(n)) {
        
        printf("YES\n");
    }else if (almost_lucky(n)) {
        
        printf("YES\n");
    }else{

        printf("NO\n");
    }
}

int lucky(int x)
{
    int flag = 0;

    while (x > 0) {

        if (((x % 10) != 4) && ((x % 10) != 7)) {

            flag = 1;
        }

        x = x / 10;
    }

    if (flag == 0) {

        return 1;
    } else {
        
        return 0;
    }
}

int almost_lucky(int y)
{
    for (int i = 1; i <= y; i++) {
        
        if (lucky(i)) {
            
            if ((y % i) == 0) {
                
                return 1;
            } 
        }
    }

    return 0;
}
