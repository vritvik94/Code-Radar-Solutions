#include<stdio.h>

int main(){
    int i,n,j=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[j++]=arr[i];
        }
    while(j<n)
    {
        arr[j++]=0;
    }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
