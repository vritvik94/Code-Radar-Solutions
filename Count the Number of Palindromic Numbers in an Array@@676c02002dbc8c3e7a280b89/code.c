#include<stdio.h>

int main(){
    int i,n,ctr=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        int temp=arr[i],sum=0,digit;
        while(temp)
        {
            digit=temp%10;
            sum=sum*10+digit;
            temp=temp/10;
        }
        if(sum=arr[i])
            ctr++;
    }
    printf("%d",ctr);
    return 0;
}
