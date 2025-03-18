#include <stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(i=2;i<=n/2;i++)
        {
            if(arr[i]%i==0)
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