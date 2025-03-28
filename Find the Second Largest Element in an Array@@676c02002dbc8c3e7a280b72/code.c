#include<stdio.h>
#include<limits.h>

int findmax(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    return max;
}

int secmax(int arr[],int n,int max)
{
    int smax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max && arr[i]>smax)
            smax=arr[i];   
    }
    if(smax==INT_MIN)
        return -1;
    else
        return smax;
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
    int max=findmax(arr,n);
    int smax=secmax(arr,n,max);
    printf("%d ",smax);
    return 0;
}