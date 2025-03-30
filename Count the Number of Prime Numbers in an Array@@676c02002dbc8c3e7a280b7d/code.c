#include<stdio.h>

int countPrimes(int arr[], int n) 
{
    int prime = 0;
    for (int i = 0; i < n; i++) 
    {
        int ctr = 0;
        if (arr[i] < 2)
            continue;
        for (int j = 2; j <= arr[i] / 2; j++) 
        {
            if (arr[i] % j == 0) 
            {
                ctr++;
                break;
            }
        }
        if (ctr == 0)
            prime++;
    }
    return prime;
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
    int primeCount = countPrimes(arr, n);
    printf("%d", primeCount);
    return 0;
}
