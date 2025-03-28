#include<stdio.h>

int findMajority(int arr[],int n)
{
    int i,ctr;
    for(i=0;i<n;i++)
    {
        ctr=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                ctr++;
        }
        if(ctr>n/2)
            return arr[i];
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
    int result=findMajority(arr,n);
    printf("%d",result);
    return 0;
}