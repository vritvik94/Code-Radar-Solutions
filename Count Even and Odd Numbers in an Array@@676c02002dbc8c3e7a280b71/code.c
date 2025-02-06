#include <stdio.h>

int main(){
    int a[100],i,odd,even;
    for(i=0;i<a[100];i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("%d ",even);
    printf("%d ",odd);
    return 0;
}