#include <stdio.h>

// Recursive function to calculate sum of first n natural numbers
int sumNatural(int n) {
    if (n == 1) {  // Base case: sum of first 1 natural number is 1
        return 1;
    } else {       // Recursive case: sum of first n numbers
        return n + sumNatural(n - 1);
    }
}

int main() {
    int n = 5;
    int sum = sumNatural(n);
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}
