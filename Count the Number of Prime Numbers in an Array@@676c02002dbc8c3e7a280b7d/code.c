#include <stdio.h>

int main(){
    int i,n,ctr=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    for(int j=2;j<=n/2;j++)
    {
        if(arr[j]%n==0)
        {
            ctr++;
            break;
        }
    }
    }
    if
        printf("%d",ctr);
    return 0;
}
