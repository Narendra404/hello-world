
#include <iostream>
#include <cstring>

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
        int a, b, c;
    	scanf("%d",&a);
    	scanf("%d",&b);
    	scanf("%d",&c);

        if((a + b == c) || (b + c == a) || (c + a == b)) {
	        printf("YES\n");
        } else {
	        printf("NO\n");
        }
	}
	return 0;
}
