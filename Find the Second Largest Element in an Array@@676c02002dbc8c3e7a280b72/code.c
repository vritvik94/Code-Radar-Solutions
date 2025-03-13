#include<stdio.h>
#include<limits.h>

int main(){
    int i,n,max,smax;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    max=INT_MIN;
    smax=INT_MIN;

    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(arr[i]!=max && smax<arr[i])
        {
            smax=arr[i];
        }
    }
        printf("%d",smax);
        return 0;
}