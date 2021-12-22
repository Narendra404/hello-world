#include <stdio.h>

int main (void)
{
	int a[4], count = 0;

	for (int i = 0; i < 4; i++)
	{
		scanf("%d ", &a[i]);
	}

	char ch;

	do
	{
		scanf("%c", &ch);

		switch(ch)
		{
			case '1':
			count += a[0];
			break;

			case '2':
			count += a[1];
			break;

			case '3':
			count += a[2];
			break;

			case '4':
			count += a[3];
			break;
		}
	}
	while(ch != '\n');

	printf("%d\n", count);
}

