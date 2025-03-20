#include<stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n],rsum[n];
    int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        rsum[i]=sum;
    }

    for(i=0;i<n;i++)
    {
        printf("%d",rsum[i]);
    }
    return 0;
}
