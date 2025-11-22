#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    lastDigit = num % 10;          // extract last digit
    firstDigit = num / 1000;       // extract first digit

    printf("Sum of first and last digit: %d\n", firstDigit + lastDigit);
    return 0;
}

