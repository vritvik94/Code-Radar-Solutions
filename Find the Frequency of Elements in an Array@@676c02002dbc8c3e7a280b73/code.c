#include<stdio.h>

void countFrequency(int arr[],int n)
{
    int i,j,ctr;
    for(i=0;i<n;i++)
    {
        ctr=1;
        if(arr[i]==-1) continue;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
                arr[j]=-1;
            }
        }
        printf("%d %d\n",arr[i],ctr);
    }
}

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    countFrequency(arr,n);
    return 0;
}