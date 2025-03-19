#include<stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum=0;
    for(i=0;i<n;i++)
    {
        for(int j=1;j<=arr[i]/2;j++)
        {
            sum=sum+arr[i];
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
