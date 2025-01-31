#include <stdio.h>

int main(){
    int i,n,p;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);
        p=i*n;
        printf("%d x %d = %d\n",n,i,p);
    }
    return 0;
}