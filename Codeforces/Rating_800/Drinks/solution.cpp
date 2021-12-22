#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,sum=0;
	scanf("%d",&n);
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("%.12lf\n",(double)sum/n);
	return 0;
}