#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	char *arr=(char*)malloc(101*sizeof(char));
	scanf("%s",arr);
	int len=strlen(arr);
	int count[26]={0};
	for (int i = 0; i < len; ++i)
	{
		count[(int)arr[i]-97]++;
	}
	int lenght=0;
	for (int i = 0; i < 26; ++i)
	{
		if (count[i]>1)
		{
			lenght+=count[i]-1;
		}
	}
	if ((len-lenght)%2==0)
	{
		printf("CHAT WITH HER!\n");
	}
	else
	{
		printf("IGNORE HIM!\n");
	}
	return 0;
}