#include<stdio.h>

void printLeader(int arr[], int n) 
{
    int leaders[100],count=0;
    int lmax=arr[n-1];
    leaders[count++]=lmax;

    for (int i=n-2;i>=0;i--) 
    {
        if (arr[i]>=lmax) {
            lmax=arr[i];
            leaders[count++]=lmax;
        }
    }
    for (int i=count-1;i>=0;i--)
     {
        printf("%d ",leaders[i]);
    }
}

int main() {
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    printLeader(arr,n);
    return 0;
}

