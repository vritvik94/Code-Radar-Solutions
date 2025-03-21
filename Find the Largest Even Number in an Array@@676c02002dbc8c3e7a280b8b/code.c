#include<stdio.h>
#include<limits.h>

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max=INT_MIN;

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if(max<arr[i])
                max=arr[i];
        }
    }
    if (!max)
        printf("-1");
    else
        printf("%d", max);

}