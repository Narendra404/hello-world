/*Here we have to find the sum of Even
Fibonacci numbers less than 4 million */
#include <stdio.h>
 int main(void)
 {
     int a=1,b=1,sum=0,c;
     while(c<4000000)
     {
         c=a+b;
         a=b;
         b=c;
         if(c%2==0)
            sum+=c;

     }
     printf("sum=%d",sum);
 }
