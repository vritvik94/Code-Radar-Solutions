#include<stdio.h>

void sortArray(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void minDiff(int arr[], int n)
{
    if(n == 1) 
    {
        printf("-1\n");
        return;
    }

    sortArray(arr, n); 

    int min = arr[1] - arr[0];  
    int num1 = arr[0], num2 = arr[1];

    for(int i = 1; i < n - 1; i++) 
    {
        int diff = arr[i + 1] - arr[i];
        if (diff < min) 
        {
            min = diff;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    printf("%d %d\n", num1, num2); 
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    minDiff(arr, n);
    return 0;
}
