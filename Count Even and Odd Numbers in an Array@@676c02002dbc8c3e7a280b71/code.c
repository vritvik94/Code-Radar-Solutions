#include <stdio.h>

int main(){
    int a[100],i,n,odd,even;
    scanf("%d",&n)
    for(i=0;i<n;i++)
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