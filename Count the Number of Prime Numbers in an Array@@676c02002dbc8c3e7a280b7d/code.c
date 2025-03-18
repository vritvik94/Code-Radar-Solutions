#include<stdio.h>

int main(){
    int i,j,n,ctr,prime=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        ctr=0;
        if(arr[i]<2)
            continue;
        for(j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                ctr++;
                break;
            }
        }
    if(ctr==0)
        prime++;
    }
    printf("%d",prime);
    return 0;
}