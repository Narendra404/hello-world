#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
	char arr[60];
	int n;
	scanf("%d",&n);
	scanf("%s",arr);
	int len=strlen(arr);
	int count=0;
	for (int i = 0; i < len-1; ++i)
	{
		if (arr[i]==arr[i+1])
		{
			count++;	
		}
	}
	printf("%d\n",count);
	return 0;
}