/*The Question was to find the sum of numbers
which were either multiples of 3 or multiples of 5 or both*/
#include <stdio.h>
int main (void)
{
     int i=1;
     int sum=0;
    while(i<1000)
    {
        if((i%3==0) || (i%5==0))
        {
            sum+=i;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}//Will make it dynamic some time later maybe..  :b
