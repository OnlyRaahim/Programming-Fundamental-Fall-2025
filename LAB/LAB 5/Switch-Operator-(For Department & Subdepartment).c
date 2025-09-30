#include <stdio.h>

int main() {
    int dept, subDept;

    printf("Select your department:\n");
    printf("1. CS (Computer Science)\n");
    printf("2. EEE (Electrical Engineering)\n");
    printf("Enter your choice: ");
    scanf("%d", &dept);

    switch (dept) {
        case 1:
            printf("You selected Computer Science.\n");
            printf("Choose your specialization:\n");
            printf("1. CSIT\n");
            printf("2. CSSD\n");
            printf("3. CSCR\n");
            scanf("%d", &subDept);

            switch (subDept) {
                case 1:
                    printf("You selected CSIT.\n");
                    break;
                case 2:
                    printf("You selected CSSD.\n");
                    break;
                case 3:
                    printf("You selected CSCR.\n");
                    break;
                default:
                    printf("Invalid specialization choice.\n");
            }
            break;

        case 2:
            printf("You selected Electrical Engineering.\n");
            break;
                

        default:
            printf("Invalid department choice.\n");
    }

    return 0;
}
