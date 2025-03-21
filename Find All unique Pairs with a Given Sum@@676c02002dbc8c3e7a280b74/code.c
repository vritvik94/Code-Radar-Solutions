#include<stdio.h>

int main(){
    int i,n,targetsum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&targetsum);
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i>0 && arr[i]=arr[i-1])
                continue;
            if(arr[i]+arr[j]==targetsum)
                printf("%d %d",arr[i],arr[j]);
        }
    }
    return 0;
}