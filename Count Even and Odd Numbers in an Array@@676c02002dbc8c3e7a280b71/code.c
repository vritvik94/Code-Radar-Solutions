#include <stdio.h>

int main(){
    int i,a[i],odd = 0,even = 0;
    scanf("%d",&i);
    for(int j=0;j<i;j++)
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