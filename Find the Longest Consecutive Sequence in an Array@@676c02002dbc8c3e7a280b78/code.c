#include<stdio.h>

void bubleSort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
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

int longestConsecutive(int arr[],int size)
{
    if(size==0) continue;

    bubleSort(arr,n);
    int max=1,count=1;

    for(int i=1;i<size;i++)
    {
        if(arr[i]==arr[i-1]) continue;
        if(arr[i]==arr[i-1]+1)
            count++;
        else
            count=1;
        if(count>max){
            max=count;}
    }
    return max;
}

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result=longestConsecutive(arr,n);
    printf("%d",result);
    return 0;
}

