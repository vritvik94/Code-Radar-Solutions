#include<stdio.h>

int isSorted(int arr[], int n) 
{
    int inc = 1, dec = 1;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > arr[i - 1])
            dec = 0;
        if (arr[i] < arr[i - 1])
            inc = 0;
    }
    return inc || dec;
}

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    if (isSorted(arr, n))
        printf("YES");
    else
        printf("NO");
    return 0;
}
