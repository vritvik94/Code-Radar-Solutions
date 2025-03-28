#include<stdio.h>

int sortArray(int arr[],int n)
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

int smallestInteger(int arr[],int n)
{
    int num=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
            num++;
    }
    return num;
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
    int missing=smallestInteger(arr,n);
    printf("%d",missing);
    return 0;
}



