#include <iostream>
#include <sstream>

using namespace  std;

int main()
{
	char s[101];
	scanf("%s",s);
	stringstream ss(s);
	int n,count=0;
	int arr[60];
	char ch;
	while(ss>>n)
	{
		arr[count]=n;
		ss>>ch;
		count++;
	}
	int min,temp;
	for (int i = 0; i < count-1; ++i)
	{
		min=i;
		for (int j = i+1; j < count; ++j)
		{
			if (arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	for (int i = 0; i < count; ++i)
	{
		if(i==count-1)
			printf("%d",arr[i]);
		else
		{
			printf("%d+",arr[i]);
		}
	}

	return 0;
}
