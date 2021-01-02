#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int x;
		scanf("%d",&x);
		int *arr=(int*)malloc(x*sizeof(int));
		for (int i = 0; i < x; ++i)
		{
			scanf("%d",&arr[i]);
		}
		int t=(x*(x-1))/2;
		int *area=(int*)malloc(t*sizeof(int));
		int count=0;
		for (int i = 0; i < x; ++i)
		{
			for (int j = i+1; j < x; ++j)
			{
				area[count]=(arr[j]-arr[i]);
				count++;
			}
		}
		int dup[50]={0},result=0;
		for (int i = 0; i < t; ++i)
		{
			dup[area[i]]++;
		}
		for (int i = 0; i < 50; ++i)
		{
			if (dup[i]>0)
			{
				result++;
			}
		}
		printf("%d\n",result);
	}

	return 0;
}