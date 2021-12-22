#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],count[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		count[arr[i]-1]=i+1;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",count[i]);
	}
	printf("\n");

	return 0;
}