#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char *str1,*str2;
	str1=(char*)malloc(101*sizeof(char));
	str2=(char*)malloc(101*sizeof(char));
	scanf("%s",str1);
	scanf("%s",str2);
	int len=strlen(str1);
	char ch;
	int flag=0;
	for (int i = 0; i < len; ++i)
	{
		if (isupper(str1[i]))
		{
			ch=toupper(str2[i]);
		}
		else
		{
			ch=tolower(str2[i]);
		}
		if(str1[i]<ch)
		{
			flag=-1;
			break;
		}
		if (str1[i]>ch)
		{
			flag=1;
			break;
		}
	}
	printf("%d\n",flag);
	return 0;
}