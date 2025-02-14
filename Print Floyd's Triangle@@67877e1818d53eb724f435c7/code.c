#include <stdio.h>

int mai(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}