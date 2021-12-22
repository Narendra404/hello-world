#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str,str1;
	getline(cin , str);
	getline(cin , str1);
	int len=str.size();
	int flag=0;
	for (int i = len-1; i >= 0; i--)
	{
		if (str[i]!=str1[len-1-i])
		{
			flag=1;
		}
	}
	if (flag==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}