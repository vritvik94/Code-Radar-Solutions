#include<stdio.h>
#include<limits.h>

int main(){
    int i,n,min,smin;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    min=INT_MAX;
    smin=INT_MAX;

    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]!=min && smin>arr[i])
        {
            smin=arr[i];
        }
    }
    if(smin==INT_MAX)
        printf("-1");
    else
        printf("%d",smin);
    return 0;
}
