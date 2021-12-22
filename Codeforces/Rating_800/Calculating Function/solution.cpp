#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int  n;
	scanf("%lli",&n);
	if (n%2==0)
	{
		printf("%lli\n",n/2);
	}
	else
	{
		printf("%lli\n",((n-1)/2) - n );
	}
	return 0;
}