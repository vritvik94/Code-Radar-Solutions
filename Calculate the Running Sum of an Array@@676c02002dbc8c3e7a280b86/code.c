#include<stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            sum=sum=arr[j];
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d",arr[j]);
    }
    return 0;
}

