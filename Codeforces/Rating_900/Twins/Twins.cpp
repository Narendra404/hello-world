#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,sum=0;
	scanf("%d",&n);		
	int *arr=(int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	/*for (int j=0;j<n;j++)
	{
		for (int i = 0; i < n-1-j; ++i)
		{
			if (arr[i]<arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}*/
	sort(arr,arr + n,greater<int>());
	int count=0,i=0;;
	for ( i = 0; i < n; ++i)
	{
		count+=arr[i];
		if (count > sum-count)
		{
			break;
		}
	}
	printf("%d\n",i+1);

	return 0;
}