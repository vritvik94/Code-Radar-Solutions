#include<stdio.h>

int prime(int n)
{
    int ctr,i;
    ctr=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            ctr++;
            break;
        }
    }
    if(ctr==0)
        printf("1");
    else
        printf("0");
}