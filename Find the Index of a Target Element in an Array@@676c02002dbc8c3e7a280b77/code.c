#include<stdio.h>

int tindex(int arr[],int n,int t)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int i,n,t;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    int result=tindex(arr,n,t);
    if(result!=-1)
        printf("%d",result);
    else
        printf("-1");
    return 0;
}