#include<stdio.h>

int main(){
    int i,n,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int max=0,frequency;
    for(i=0;i<n;i++)
    {
        int ctr=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
            }
        }
        if(ctr>max)
        {
            max=ctr;
            frequency=arr[i];
        }
    }
    printf("%d",frequency);
    return 0;
}
