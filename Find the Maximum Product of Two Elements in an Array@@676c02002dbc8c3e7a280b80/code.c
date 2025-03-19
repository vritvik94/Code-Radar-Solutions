#include<stdio.h>

int main(){
    int i,n,j,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

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

    int product1=arr[n-1]*arr[n-2];
    int product2=arr[0]*arr[1];

    int max;
    if(product1>product2)
        max=product1;
    else
        max=product2;
    printf("%d",max);
    return 0;
}