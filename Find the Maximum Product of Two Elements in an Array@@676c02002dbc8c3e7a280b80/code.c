#include<stdio.h>

int main(){
    int i,n,j,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-i;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }

    int product1=arr[n-1]*arr[n-2];
    int product2=arr[0]*arr[1];

    if(product1>product2)
        max=product1;
    else
        max=product2;
    return 0;
}