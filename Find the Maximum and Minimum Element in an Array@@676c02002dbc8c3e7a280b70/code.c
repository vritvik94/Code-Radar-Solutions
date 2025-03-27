#include <stdio.h>
#include<limits.h>

void maxmin(int arr[],int n)
{
    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
}

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    maxmin(arr,n);
    return 0;
}