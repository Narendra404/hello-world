#include <iostream>

int main(int argc, char const *argv[])
{
	char str[101];
	scanf("%s",str);
	int count0=0,count1=0,i=0;
	while(str[i]!='\0')
	{
		if (str[i]=='1')
		{
			count1++;
			count0=0;
		}
		else
		{
			count0++;
			count1=0;	
		}

		if (count1>=7 || count0>=7)
		{
			break;
		}
		i++;
	}
	if (count1>=7 || count0>=7)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}