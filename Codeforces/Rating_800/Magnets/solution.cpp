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
	int flag=(arr[0]==1)?0:1;
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		if (flag==0)
		{
			if (arr[i]!=1)
			{
				flag=1;
				count++;
			}
		}
		if (flag==1)
		{
			if (arr[i]!=10)
			{
				flag=0;
				count++;
			}
		}
	}
	printf("%d\n",count+1);
	return 0;
}