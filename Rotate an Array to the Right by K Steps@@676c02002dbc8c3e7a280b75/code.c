#include<stdio.h>

int main(){
    int i,n,k,temp,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    scanf("%d",&k);

    for(j=1;j<=k;j++)
    {
    temp=a[n-1];
    for(i=n-1;i>=1;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    }

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}