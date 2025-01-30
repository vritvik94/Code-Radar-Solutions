#include <stdio.h>

int main(){
    int i,a,ctr=0;
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            ctr++;
            break;
        }
    }
    if(ctr==0)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}