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

    min=INT_MIN;
    smin=INT_MIN;

    for(i=0;i<n;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(min!=arr[i] && smin>arr[i])
            printf("%d",smin);
    }
    if(smin==INT_MIN)
        printf("-1");
    else
        printf("%d",smin);
    return 0;
}