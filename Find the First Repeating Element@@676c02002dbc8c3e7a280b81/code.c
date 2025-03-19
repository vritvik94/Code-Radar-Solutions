#include<stdio.h>

int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int ctr=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]=arr[j])
            {
                ctr++;
            }
        }
        printf("%d",ctr);
        return 0;
    }
    printf("-1");
    return 0;
}