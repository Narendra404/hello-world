#include <iostream>

int main(int argc, char const *argv[])
{
	int n,k;
	scanf("%d %d",&n,&k);
	while(k)
	{
		if (n%10==0)
		{
			n=n/10;
		}
		else
		{
			n--;
		}
	k--;
	}
	printf("%d\n",n);
	return 0;
}