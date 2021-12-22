#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	getline(cin , str);
	int len=str.size();
	char test1[len],test2[len];
	int count1=0,count2=0;
	for (int i = 0; i < len; ++i)
	{
		if (islower(str[i]))
		{
			count1++;
		}
		if (isupper(str[i]))
		{
			count2++;
		}
		test1[i]=tolower(str[i]);
		test2[i]=toupper(str[i]);
	}
	if (count1>=count2)
	{
		for (int i = 0; i < len; ++i)
		{
		printf("%c",test1[i] );
		}
		printf("\n");
	}
	else
	{
		for (int i = 0; i < len; ++i)
		{
			printf("%c",test2[i] );
		}
		printf("\n");
	}
	return 0;
}