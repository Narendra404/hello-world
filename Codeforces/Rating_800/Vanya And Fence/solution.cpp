#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,h;
	scanf("%d %d",&n,&h);
	int arr[n],count=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		if (arr[i]>h)
		{
			count+=2;
		}
		else
		{
			count++;
		}
	}
	printf("%d\n",count);

	return 0;
}