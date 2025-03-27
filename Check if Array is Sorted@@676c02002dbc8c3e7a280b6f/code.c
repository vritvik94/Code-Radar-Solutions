#include<stdio.h>

/*int main(){
    int i,n,ctr=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++)
    {
        if(a[i]>a[i+1])
        {
                ctr=1;
                break;
        }
    }
    if(ctr==0)
        printf("Sorted");
    else
        printf("Not Sorted");
    return 0;
}*/

int sorted(int arr[],int n)
{
    int ctr=0,i;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(sorted(arr,n))
        printf("Sorted");
    else        
        printf("Not Sorted");
    return 0;
}