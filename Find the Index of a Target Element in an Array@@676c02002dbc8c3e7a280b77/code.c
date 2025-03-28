#include<stdio.h>

int index(int arr[],int n,int t)
{
    int index;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            index=t;
            break;
        }
    }
    return index;
}

int main(){
    int i,n,t,index;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    if(index(n)!=-1)
        printf("%d",index);
    else
        printf("-1");
    return 0;
}