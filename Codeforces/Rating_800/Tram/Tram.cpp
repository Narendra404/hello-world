#include <iostream>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int count=0,current=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d",&a[i],&b[i]);
		current+=b[i]-a[i];
		if (current>count)
		{
			count=current;
		}
	}
	printf("%d\n",count);

	return 0;
}