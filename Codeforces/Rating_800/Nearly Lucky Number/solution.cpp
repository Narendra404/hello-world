#include <bits/stdc++.h>

using namespace std;

void solve();

int main()
{
	//int t;
	//scanf("%d",&t);
	//while(t--)
	{
		solve();
	}
	return 0;
}

void solve()
{
	long long int n,t,d,m,count=0;
	cin>>n;
	t=n;
	while(t>0)
	{
		d=t%10;
		if (d==4 || d==7)
		{
			count++;
		}
		t=t/10;
	}
	if (count==0)
	{
		printf("NO\n");
		return;
	}
	int flag=0;
	while(count>0)
	{
		m=count%10;
		if (m!=4 && m!=7)
		{
			flag=1;
		}
		count=count/10;
	}
	if (flag==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}