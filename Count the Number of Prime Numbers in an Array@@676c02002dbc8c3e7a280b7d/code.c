#include <stdio.h>

int main(){
    int i,n,ctr=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=2;i<n;i++)
    {
        if(arr[i]%n==0)
        {
            ctr++;
            break;
        }
    }
    if(ctr==0)
        printf("%d",ctr);
    return 0;
}