#include<stdio.h>

int main(){
    int i,n,ctr=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>a[i+1])
        {
                ctr=1;
                break;
        }
    }
    if(ctr==0)
        printf("Sorted");
    else
        printf("Not Sorted");
    return 0;
}