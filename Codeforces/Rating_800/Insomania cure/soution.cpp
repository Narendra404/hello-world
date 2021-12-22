#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[5];
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d",&arr[i]);
	}
	int count[arr[4]]={0};
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < arr[4]; ++j)
		{
			if ((j+1) % arr[i]==0)
			{
				count[j]=1;
			}
		}
	}
	int flag=0;
	for (int i = 0; i < arr[4]; ++i)
	{
		if (count[i]==1)
		{
			flag++;
		}
	}
	printf("%d\n",flag);
	return 0;
}