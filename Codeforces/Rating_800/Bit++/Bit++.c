#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,x=0;
	scanf("%d",&n);
	char* str=(char*)malloc(3*sizeof(char));
	for (int i = 0; i < n; ++i)
	{
		scanf("%s",str);
		if (str[0]=='X')
		{
			if (str[1]=='+')
			{
				x++;
			}
			if (str[1]=='-')
			{
				x--;
			}
		}
		if (str[0]=='+')
		{
			x++;
		}
		if (str[0]=='-')
		{
			x--;
		}
	}
	free(str);
	printf("%d\n",x);		
	return 0;
}