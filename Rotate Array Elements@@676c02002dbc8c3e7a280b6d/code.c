#include<stdio.h>

int main(){
    int i,n,k;
    scanf("%d",&n);
    int arr[n],temp[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&k);
    k=k%n;

    for (i = n - k; i < n; i++) 
    {
         printf("%d\n", arr[(n - k + i) % n]);
    }
    return 0;
}
