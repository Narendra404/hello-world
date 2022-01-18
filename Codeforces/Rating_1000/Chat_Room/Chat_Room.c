#include <stdio.h>

void solve(void);

int main(void)
{
    solve();
    return 0;
}

void solve(void)
{
    char ch, buf[] = {'h', 'e', 'l', 'l', 'o'};
    int count = 0, flag = 0;

    do {
        scanf("%c", &ch);

        if (ch == buf[count]) {
            count++;

            if (count == 5) {
                count = 4;
                flag = 1;
            }
        }
    } while (ch != '\n');
    
    if (flag == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
