#include <stdio.h>

int main(){
    int a,b,n;
    scanf("%d %d",&a,&b);
    printf("%d",a>>b&1);
    return 0;
}