#include <iostream>

int main(int argc, char const *argv[])
{
	int k,n,w;
	scanf("%d %d %d",&k,&n,&w);
	int money=k*(w*(w+1)/2) -n;
	if (money<0)
	{
		money=0;
	}
	printf("%d\n",money);
	return 0;
}