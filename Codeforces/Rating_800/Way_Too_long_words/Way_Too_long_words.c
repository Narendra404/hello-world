#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	char str[n][105];
	for (int i = 0; i < n; ++i)
	{
		scanf("%s",str[i]);
	}
	for (int j = 0; j < n; ++j)
	{
		int l=strlen(str[j]);
		if (l>10)
		{
			printf("%c%d%c\n",str[j][0],l-2,str[j][l-1]);	
		}
		else
		{
			printf("%s\n",str[j]);
		}
	}
	return 0;
}				