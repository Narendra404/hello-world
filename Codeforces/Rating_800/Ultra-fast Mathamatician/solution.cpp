#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str,str1;
	getline(cin , str);
	getline(cin , str1);
	int len=str.size();
	for (int i = 0; i < len; ++i)
	{
		if (str[i]-str1[i]==0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
	}
	return 0;
}