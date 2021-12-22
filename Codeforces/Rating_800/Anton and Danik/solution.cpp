#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	char str[n];
	scanf("%s",str);
	int countA=0,countD=0;
	for (int i = 0; i < n; ++i)
	{
		if (str[i]=='A')
		{
			countA++;
		}
		if (str[i]=='D')
		{
			countD++;
		}
	}
	if (countA>countD)
	{
		printf("Anton\n");
	}
	else if (countD>countA)
	{
		printf("Danik\n");
	}
	else
	{
		printf("Friendship\n");
	}

	return 0;
}