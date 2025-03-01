#include<stdio.h>

int main(){
    int i,temp,sum=0,digit,n;
    scanf("%d",&num);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    temp=a[i];
    while(a[i]!=0)
    {
        digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    if(temp==sum)
        printf("YES");
    else
        printf("NO");
    return 0;
}