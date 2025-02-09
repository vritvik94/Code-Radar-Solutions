#include <stdio.h>

int main(){
    int d,n,result;
    scanf("%d",&n);
    for(d=31;d>=0;d--)
    {
        result=n >> d;
        if(result & 1)
            printf("%d",result);
    }
    return 0;
}