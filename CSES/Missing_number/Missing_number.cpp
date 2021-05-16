#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
    long long sum=0;int n, *arr;
    scanf("%d",&n);
    arr=(int*)malloc((n-1)*sizeof(int));
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",arr+i);
        sum+= *(arr +i);
    }
    long long sum0=(n*(n+1))/2;
    printf("%lli",(sum0-sum));
}
