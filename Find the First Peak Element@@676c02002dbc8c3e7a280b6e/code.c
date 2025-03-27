#include<stdio.h>

int firstPeak(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if((i==0 || arr[i]>arr[i-1]) && (i==n-1 || arr[i]>arr[i+1]))
        {
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int peak=firstPeak(arr,n);
    printf("%d\n",peak);
    return 0;
}