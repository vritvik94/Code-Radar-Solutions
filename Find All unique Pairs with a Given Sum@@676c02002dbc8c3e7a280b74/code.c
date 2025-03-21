#include<stdio.h>

int main(){
    int i,n,targetsum,j,temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&targetsum);

     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j] == targetsum)
                printf("%d %d\n",arr[i],arr[j]);
        }
     }
     return 0;
}
