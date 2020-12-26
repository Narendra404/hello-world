#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int arr[5][5];
	int count=0;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==1)
			{
				count=abs(i-2)+abs(j-2);
			}	
		}
	}
	printf("%d\n",count);
	return 0;
}