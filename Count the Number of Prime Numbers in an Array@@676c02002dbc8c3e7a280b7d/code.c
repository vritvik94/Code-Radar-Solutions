#include <stdio.h>

int main(){
    int i,n,ctr,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        ctr=0;
        for(j=2;j<=n/2;j++)
        {
            if(arr[i]%j==0)
            {
                ctr++;
                break;
            }
        }
    }
    if(ctr==0)
        printf("%d",ctr);
    return 0;
}