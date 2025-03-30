#include<stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    while (j < n) 
    {
        arr[j++] = 0;
    }
}

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
    moveZerosToEnd(arr, n);
    printArray(arr, n);    
    return 0;
}
