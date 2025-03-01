#include<stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    temp=a[i];
    while(a[i]!=0)
    {
        digit=num%10;
        sum=sum*10+digit;
        num=num/10;
    }
    if(a[i]==sum)
        printf("YES");
    else
        printf("NO");
    return 0;
}