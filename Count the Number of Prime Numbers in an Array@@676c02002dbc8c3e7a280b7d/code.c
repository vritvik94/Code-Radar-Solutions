#include <stdio.h>

int main() {
    int i, n, ctr = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % n == 0) {
            ctr = 1; // Set flag if at least one number is divisible
            break;
        }
    }

    printf("%d", ctr); // Print 0 if no numbers are divisible, otherwise print 1
    return 0;
}

