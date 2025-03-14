#include<stdio.h>

int main(){
    int i,n,isPallindrome;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            isPallindrome=0;
            break;
        }
    }
    if(isPallindrome)
        printf("YES");
    else
        printf("NO");
    return 0;
}