#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a& 0<<32 || b& 1<<31)
        printf("0");
    else
        printf("1");
    return 0;
}