/*Optimized version of the multiples.c
program for Hacker-rank*/
#include <stdio.h>
 int main(void)
 {
   long int n;
   printf("Enter the Limit :\n");/*Taking input from the
   user for the limit of the problem*/
   scanf("%ld",&n);
   long int i=(n-1)/3;//number of 3's whose sum is less than the limit
   long int j=(n-1)/5;//number of 5's whose sum is less than the limit
   long int k=(n-1)/15;//number of 15's whose sum is less than the limit
   long int sum1=3*(i*(i+1)/2);//sum of i consecutive multiples of 3
   long int sum2=5*(j*(j+1)/2);//sum of j consecutive multiples of 5
   long int sum3=15*(k*(k+1)/2);//sum of k consecutive multiples of 15
   long int sum=sum1+sum2-sum3;//subtracting the sum of 15 which had been counted twice
     printf("sum=%d",sum);//printing the total sum
 }
