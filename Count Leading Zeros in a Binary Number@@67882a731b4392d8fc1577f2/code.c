#include <stdio.h>

int main(){
    unsigned a,i;
    scanf("%u",&a);
    while(a!=0)
    {
        i++;
        a=a>>1;
    }
    printf("%u",32-i);
    return 0;
}