#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[k];
	for (int i = 0; i < k; ++i)
	{
		arr[i]=n/k;
	}
	int m=k-1;
	for (int i = 0; i < n%k; i++)
	{
		arr[m]++;
		m--;
	}
	for (int i = 0; i < k; ++i)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}