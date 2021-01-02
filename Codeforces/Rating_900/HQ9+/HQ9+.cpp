#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
	char str[101];
	scanf("%s",str);
	int len=strlen(str);
	for (int i = 0; i < len; ++i)
	{
		if (str[i]=='H' || str[i]=='Q' ||str[i]=='9')
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}