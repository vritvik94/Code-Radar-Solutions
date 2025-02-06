#include <stdio.h>

int main(){
    int i,a[i],;
    scanf("%d",&i);
    for(int j=0;j<i;j++)
    {
        odd=0;
        even=0;
        scanf("%d",&(a[j]));
        if(a[j]%2==0)
            even++;
        else
            odd++;
    }
    printf("%d ",even);
    printf("%d ",odd);
    return 0;
}