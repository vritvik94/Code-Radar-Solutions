#include<stdio.h>

int main(){
    int i,n,k,ctr=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&k);

    for(i=0;i<n;i++)
        if(arr[i]>k)
            ctr++;
    printf("%d",ctr);
    return 0;
}
