#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	//sort(arr,arr + n, greater<int>());
	int num[4]={0};
	for (int i = 0; i < n; ++i)
	{
		num[arr[i]-1]++;
	}
	int res=num[3];
	if (num[2]>=num[0])
	{
		res+=num[2];
		num[0]=0; 
	}
	if (num[2]<num[0])
	{
		res+=num[2];
		num[0]=num[0]-num[2];
	}
	res+=num[1]/2;
	if (num[1]%2==0)
	{
		if (num[0]%4==0)
		{
			res+=num[0]/4;
		}
		else
		{
			res+=num[0]/4 + 1;
		}
	}
	else
	{
		res+=num[0]/4;
		if (num[0]%4==3)
		{
			res+=2;
		}
		else
		{
			res++;
		}
	}
	printf("%d\n",res);
	return 0;
}