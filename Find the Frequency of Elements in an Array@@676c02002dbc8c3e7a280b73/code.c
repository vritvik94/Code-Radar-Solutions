#include<stdio.h>

int main(){
    int i,n,ctr;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        ctr=1;
        if(arr[i]=-1) continue;
    }
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]=arr[j])
        {
            ctr++;
            arr[j]=-1;
        }
    }
        printf("%d %d\n",arr[i],ctr);
    return 0;
}