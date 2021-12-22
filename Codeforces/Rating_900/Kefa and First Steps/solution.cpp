#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	int count=0,max=0;
	for (int i = 0; i < n-1; ++i)
	{
		if (arr[i]<=arr[i+1])
		{
			count++;
			if (count>max)
			{
				max=count;
			}
			continue;
		}
		count=0;
	}
	printf("%d\n",max+1);
	return 0;
}