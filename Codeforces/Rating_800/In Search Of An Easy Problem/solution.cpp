#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],flag=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		if (arr[i]==1)
		{
			flag=1;
		}
	}
		if (flag==0)
		{
			printf("EASY\n");
		}
		else
		{
			printf("HARD\n");
		}
	return 0;
}