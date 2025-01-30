#include <stdio.h>

int main(){
    int i,n,prod;
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        prod=i*n;
        printf("%d * %d = %d\n",n,i,prod);
    }
    return 0;
}