#include <stdio.h>

int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}