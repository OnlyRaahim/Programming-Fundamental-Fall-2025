#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input elements of array.\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Reverse in place
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

