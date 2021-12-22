#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n-1; ++i)
	{
		if (i%2==0)
		{
			printf("I hate that ");
		}
		else
		{
			printf("I love that ");
		}
	}
	if (n%2==0)
	{
		printf("I love it");
	}
	else
	{
		printf("I hate it");
	}
	return 0;
}