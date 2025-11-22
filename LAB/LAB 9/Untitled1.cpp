

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = n * (n + 1) * (2 * n + 1) / 6;

    printf("Sum of series 1^2 + 2^2 + ... + %d^2 is: %d\n", n, sum);
    return 0;
}

