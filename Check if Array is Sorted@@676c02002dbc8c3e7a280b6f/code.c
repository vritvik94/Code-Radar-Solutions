#include<stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]<=a[i+1])
            printf("\nSorted");
        else
            printf("\nNot Sorted");
    }
    return 0;
}