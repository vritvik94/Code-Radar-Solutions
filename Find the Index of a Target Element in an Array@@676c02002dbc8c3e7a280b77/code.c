#include<stdio.h>

int main(){
    int i,n,t,index=-1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);

    for(i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            index=i;
            break;
        }
    }
    if(index!=-1)
        printf("%d",index);
    else
        printf("-1");
    return 0;
}