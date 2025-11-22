#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp1, temp2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp1 = a;
    temp2 = b;

    // Find GCD using Euclidean Algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (temp1 * temp2) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}

