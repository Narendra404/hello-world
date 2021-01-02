#include <iostream>
#define lli long long int
int main(int argc, char const *argv[])
{
	lli n,m,a;
	scanf("%lli %lli %lli",&n,&m,&a);
	lli x=n/a;
	lli y=m/a;
	if (n%a==0)
	{
		x--;
	}
	if (m%a==0)
	{
		y--;
	}
	printf("%lli\n",(x+1)*(y+1));
	/*if (n%a==0 && m%a==0)
	{
		printf("%lli\n",x*y);
	}
	else
	{
		lli res=x*y +x+y+1;
		if (n%a==0)
		{
			res=res-x-1;
		}
		if (m%a==0)
		{
			res=res-y-1;
		}
		if (res==0)
		{
			res=1;
		}
		printf("%lli\n",res);
	}*/
	return 0;
}