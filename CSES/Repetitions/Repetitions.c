#include <stdio.h>
#include <stdlib.h>
 
void solve(void);
 
int main(void)
{
	solve();
	return 0;
}
 
void solve(void)
{
    char *ch = (char*) malloc(sizeof(char) * 1000001);
    scanf("%s", ch);
    int max = 1, count = 1;
    for (int i = 0; i < 1000001; i++)
    {
        if (ch[i] == '\0')
        {
            if (count > max)
            {
                max = count;
            }
            break;
        }
        else if (i == 0)
        {
            continue;
        }
        else if (ch[i] == ch[i - 1])
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 1;
        }
    }
    printf("%d\n", max);
}
