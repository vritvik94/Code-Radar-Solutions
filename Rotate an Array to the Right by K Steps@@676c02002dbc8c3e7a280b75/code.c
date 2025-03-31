#include<stdio.h>


void rotateArray(int arr[],int n,int k)
{
    k=k%n;
    int i;
    for(i=n-k;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-k;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main(){
    int i,n,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    rotateArray(arr,n,k);
    return 0;
}