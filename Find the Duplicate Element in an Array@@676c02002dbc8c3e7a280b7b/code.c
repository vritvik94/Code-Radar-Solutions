#include<stdio.h>

int duplicateElement(int arr[],int n)
{
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
            }
        }
    }
    return ctr;
}

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",duplicateElement(arr,n));
    return 0;
}