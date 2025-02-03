#include <stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    for(i=31;i>=0;i--)
    {
        printf("%d" (n>>i) & 1);
    }
    printf("\n");
    return 0;
}