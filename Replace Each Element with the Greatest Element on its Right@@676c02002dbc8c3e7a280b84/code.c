#include<stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    arr[n-1]=-1;

    for(i=n-1;i>=0;i--)
    {
        int temp=arr[i];
        arr[i]=arr[n-1];
        if(temp>arr[n-1])
        {
            arr[n-1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}