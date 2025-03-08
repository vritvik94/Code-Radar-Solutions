#include<stdio.h>

int fibonacciSeries(f)
{
    int a=0,b=1,c,i;
    if(f==0) return 0;
    if(f==1) return 1;

    for(i=2;i<=f;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}