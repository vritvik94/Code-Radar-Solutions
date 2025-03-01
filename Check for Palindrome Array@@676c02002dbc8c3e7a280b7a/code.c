#include<stdio.h>

int main(){
    int i,num,temp,sum=0,digit;
    scanf("%d",&num);
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
    if(atemp==sum)
        printf("YES");
    else
        printf("NO");
    return 0;
}