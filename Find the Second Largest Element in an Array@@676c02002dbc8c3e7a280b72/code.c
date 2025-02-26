#include<stdio.h>

int main()
{
    int i,n,j,temp;
    scanf("%d",n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[n]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%d",a[n-2]);
    return 0;
}