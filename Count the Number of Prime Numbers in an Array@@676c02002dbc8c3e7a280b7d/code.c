#include <stdio.h>

int main(){
    int i,j,ctr=0,k;
    scanf("%d",&i);
    int a[i];
    for(j=2;j<=a[i]/2;j++)
    {
        for(k=0;k<a[j];k++)
        {
        if(a[j]%j==0)
        {
            ctr++;
            break;
        }
        if(ctr==0)
            printf("%d ",a[i]);
        }
    }
    return 0;
}