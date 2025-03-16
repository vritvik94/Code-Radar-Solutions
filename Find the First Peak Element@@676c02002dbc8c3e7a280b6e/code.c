#include<stdio.h>

int main(){
    int i,n,max;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(arr[i]>arr[i+1])
        printf("%d",arr[i]);
    else
        printf("-1");
    return 0;
}