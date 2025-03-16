#include<stdio.h>

int main(){
    int i,n,ctr,m;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        ctr=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            ctr++;
        }
    if(ctr>n/2)
    {
        m=arr[i];
        printf("%d",m);
        return 0;
    }
    }
    printf("-1");
    return 0;
}