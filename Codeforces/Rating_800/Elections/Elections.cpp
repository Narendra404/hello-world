#include <iostream>

int main(int argc, char const *argv[])
{
	int n,sum=0,max=0;
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
	int count=0,k=max;
	while(count<=sum)
	{
		count=k*n -sum;
		k++;
	}
	printf("%d\n",k-1);
	return 0;
}