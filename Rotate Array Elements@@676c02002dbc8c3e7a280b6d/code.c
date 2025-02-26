#include<stdio.h>

int main(){
    int i,n,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1;i>=1;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf("\n%d",a[i]);
    return 0;
}