#include <stdio.h>

int main(){
    int i,n,ctr;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    ctr=0;
    for(i=2;i<n/2;i++)
    {
        if(arr[i]%n==0)
        {
            ctr++;
            break;
        }
    }
    if(ctr==0)
        printf("%d",ctr);
    else
        printf("0");
    return 0;
}