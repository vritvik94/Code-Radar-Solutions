#include<stdio.h>

void printLeader(int arr[],int n)
{
    printf("%d",arr[n-1]);
    int lmax=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>lmax)
        {
            printf("%d",arr[i]);
            lmax=arr[i];
        }
    }
}

int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printLeader(arr,n);
    return 0;
}
