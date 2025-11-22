#include <stdio.h>

void printChar(char *chPtr) {
    if (chPtr != NULL) { // Check if the pointer is not NULL
        printf("The character is: %c\n", *chPtr);
    } else {
        printf("Pointer is NULL.\n");
    }
}

int main() {
    char myChar = 'A';
    char *ptr = &myChar;

    printChar(ptr);  // Pass the pointer to the function

    return 0;
}
