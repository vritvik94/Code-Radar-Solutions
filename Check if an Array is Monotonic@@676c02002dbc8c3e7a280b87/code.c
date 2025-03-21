#include<stdio.h>

int main(){
    int i,n,inc=1,dec=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            dec=0;
        if(arr[i]<arr[i+1])
            inc=0;
    }

    if(inc || dec)
        printf("YES");
    else
        printf("NO");
    return 0;
}