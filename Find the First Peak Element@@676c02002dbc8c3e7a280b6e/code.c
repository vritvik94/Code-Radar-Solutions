#include<stdio.h>

int main(){
    int i,n,max;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
         printf("%d",arr[i]);
            return 0;     
        }
    }
    if(i==n-1)
    {
        if(arr[i]>arr[i-1])
        {
            printf("%d",a[i]);
            return 0;
        }
    }
    printf("-1");    
    return 0;
}
