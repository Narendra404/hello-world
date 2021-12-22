#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,x,y;
	scanf("%d",&n);
	int count[n]={0};
	scanf("%d",&x);
	int p[x];
	for (int i = 0; i < x; ++i)
	{
		scanf("%d",&p[i]);
		count[p[i]-1]++;
	}
	scanf("%d",&y);
	int q[y];
	for (int i = 0; i < y; ++i)
	{
		scanf("%d",&q[i]);
		count[q[i]-1]++;
	}
	int flag=0;
	for (int i = 0; i < n; ++i)
	{
		if (count[i]==0)
		{
			flag=1;
		}
	}
	if (flag==0)
	{
		printf("I become the guy.");
	}
	else
	{
		printf("Oh, my keyboard!");
	}
	return 0;
}