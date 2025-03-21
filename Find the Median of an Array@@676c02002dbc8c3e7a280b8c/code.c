#include<stdio.h>

int main(){
    int i,n,temp,j;
    scanf("%d",n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
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
    if(n%2==1)
        printf("%d",arr[n/2]);
    else
        printf("%d",(arr[n/2-1]+arr[n/2]/2));
    return 0;
}