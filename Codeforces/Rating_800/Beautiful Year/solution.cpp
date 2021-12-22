#include <bits/stdc++.h>

using namespace std;

int unique(int n);

int main()
{
	int x;
	scanf("%d",&x);
	for (int i = x+1; i < 9013; ++i)
	{
		if (unique(i))
		{
			printf("%d\n",unique(i));
			return 0;
		}
	}
	return 0;
}

int unique(int n)
{
	int arr[4],count[10]={0},t=n;
	int i=0;
	while(t>0)
	{
		arr[i++]=t%10;
		t=t/10;		
	}
	for (int i = 0; i < 4; ++i)
	{
		count[arr[i]]++;
	}
	int flag=0;
	for (int i = 0; i < 10; ++i)
	{
		if (count[i]>1)
		{
			flag=1;
		}
	}
	if (flag==0)
	{
		return n;
	}
	else
	{
		return 0;
	}
}