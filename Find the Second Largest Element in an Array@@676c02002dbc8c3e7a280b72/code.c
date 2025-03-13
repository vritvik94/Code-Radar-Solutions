#include<stdio.h>
#include<limits.h>
int main(){
    int i,n,j,temp,large,second;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    large=a[0];
    second=INT_MIN;
    for(i=1;i<n;i++)
    {
        if(a[i]>large)
        {
            second=large;
            large=a[i];
            
        }
        else
        {
            if(a[i]>second && a[i]<large)
            {
                second=a[i];
            }
        }
    }
    if(second==INT_MIN)
        printf("-1");
    else
        printf("%d",second);
    return 0;
}