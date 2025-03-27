#include <stdio.h>

void oddeven(int arr[],int n)
{
    int i,odd=0,even=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("%d %d",even,odd);
}

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    oddeven(arr,n);
    return 0;
}