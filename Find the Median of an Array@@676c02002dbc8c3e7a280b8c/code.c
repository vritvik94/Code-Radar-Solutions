#include<stdio.h>

void sortArray(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int medianArray(int arr[],int n)
{
    if(n%2==1)
        return arr[n/2];
    else
        return (arr[n/2-1]+arr[n/2])/2;
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
    sortArray(arr,n);
    int median=medianArray(arr,n);
    printf("%d",median);
    return 0;
}

