#include <stdio.h>

int main()
{
	int n,p,q,r;
	scanf("%d",&n);
	int c=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d %d",&p,&q,&r);
		if(p+q+r>1)
		{
			c++;
		}
		
	}
	printf("%d\n",c);
	return 0;
}