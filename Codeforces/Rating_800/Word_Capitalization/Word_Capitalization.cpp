#include <iostream>
#include <ctype.h>
#include <string.h>

int main()
{
	char arr[1024];
	scanf("%s",arr);
	arr[0]=toupper(arr[0]);
	printf("%s\n",arr);
	return 0;
}