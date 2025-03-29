#include<stdio.h>

int maxFrequency(int arr[],int n)
{
    int freq[1000]={0};
    int maxfreq=0,frequent=0;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
        if(freq[arr[i]]>maxfreq)
        {
            maxfreq=freq[arr[i]];
            frequent=arr[i];
        }
    }
    return frequent;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", maxFrequency(arr, n));
    return 0;
}