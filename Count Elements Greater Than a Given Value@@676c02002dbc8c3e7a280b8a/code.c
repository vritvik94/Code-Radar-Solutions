#include<stdio.h>

int main(){
    int i,n,k;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&k);

    for(i=0;i<n;i++)
    {
        if(arr[i]>k)
            printf("%d",arr[i]);
    }
    return 0;
}