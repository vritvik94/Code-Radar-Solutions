#include<stdio.h>

int main(){
    int i,n,isPallindrome=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
            isPallindrome=0;
            break;
    }
    if(isPallindrome)
        printf("%d",isPallindrome)
    return 0;
}