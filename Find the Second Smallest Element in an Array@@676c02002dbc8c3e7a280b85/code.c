// Your code here...
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    int min_sec = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] > min ) {
            min_sec = min;
            min = arr[i];
        } else if (arr[i] > min_sec && arr[i] != min) {
            min_sec = arr[i];
        }
    }

    if (min_sec == INT_MIN) {
        printf("-1\n");  // No second largest found
    } else {
        printf("%d\n", min_sec);
    }

    return 0;
}
