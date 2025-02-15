#include <stdio.h>

int main(){
    int i,n,flag;
    scanf("%d",&n);
    for(i=31;i>=0;i--)
    {
            printf("%d",(n&(1<<i))?1:0);
    }
   
    return 0;
}