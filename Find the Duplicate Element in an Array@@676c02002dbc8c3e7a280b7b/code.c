#include<stdio.h>

int duplicateElement(int arr[],int n)
{
   int freq[100] = {0}; 
    int duplicateCount = 0;

    for (int i = 0; i < n; i++) 
    {
        freq[arr[i]]++;

        if (freq[arr[i]] == 2) 
        { 
            duplicateCount++;
        }
    }

    return duplicateCount;
}

int main(){
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",duplicateElement(arr,n));
    return 0;
}