#include<stdio.h>

int fibonacciSeries(int n)
{
   int a=0,b=1,c,i;
   for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
   return ;
}