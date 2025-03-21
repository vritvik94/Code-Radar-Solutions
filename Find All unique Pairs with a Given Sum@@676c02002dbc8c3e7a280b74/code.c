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
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

      for (i = 0; i < n - 1; i++) 
      {
        if (i > 0 && arr[i] == arr[i - 1]) 
            continue;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] > targetsum) 
                break;
            if (arr[i] + arr[j] == targetsum)
                printf("%d %d\n", arr[i], arr[j]);
        }
    }
    return 0;
}
