#include<stdio.h>

int main(){
    int i,n,k;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    k=k%n;
    for(i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",temp[i]);
    }
    return 0;
}