#include <iostream>
#include <cstring>

bool isvowel(char ch);

int main(int argc, char const *argv[])
{
	char str[101];
	scanf("%s",str);
	int len=strlen(str);
	for (int i = 0; i < len; ++i)
	{
		str[i]=tolower(str[i]);
		if (!isvowel(str[i]))
		{
			printf(".%c",str[i]);
		}
	}
	return 0;
}

bool isvowel(char ch)
{
	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
	{
		return true;
	}
	else
	{
		return false;
	}
}