#include<stdio.h>

int ispallindrome(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-i-1])
        {
            return 0;
        }
    }
    return 1;
}

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(ispallindrome(arr,n))
        printf("YES");
    else
        printf("NO");
    return 0;
}