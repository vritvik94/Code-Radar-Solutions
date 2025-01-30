#include <stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        printf("%d * %d = %d", i , n , i * n);
    }
    return 0;
}