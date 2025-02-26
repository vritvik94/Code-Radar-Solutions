#include<stdio.h>

int main()
{
    int i,n,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
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
    int large=a[n-1];
    i=n-2;
    while(i>=0 && a[i]==large)
     i--;
     if(i==-1)
        printf("-1");
    else
        printf("%d",a[i]);
    return 0;
}