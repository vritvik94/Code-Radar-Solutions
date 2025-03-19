#include<stdio.h>

int main(){
    int i,n,digit;
    scanf("%d",&n);
    int arr[n],sumArr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        int num=arr[i],sum=0;
        while(num>0)
        {
            digit=num%10;
            sum=sum+digit;
            num=num%10;
        }
        sumArr[i]=sum;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",sumArr[i]);
    }
    return 0;
}
