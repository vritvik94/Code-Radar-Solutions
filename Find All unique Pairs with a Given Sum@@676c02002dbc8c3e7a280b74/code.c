#include<stdio.h>

int uniquePairs(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
}

int main(){
    int i,n,target;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    uniquePairs(arr,n,target);
    return 0;
}