#include <stdio.h>

#define MAX 50

int main() {
    int flightNumber[MAX];
    int destinationCode[MAX];     // Example: 1 = Dubai, 2 = Karachi, 3 = London
    int departureTime[MAX];       // Example: 900 = 9:00 AM, 1345 = 1:45 PM
    int count = 0;
    int choice;

    while (1) {
        printf("\n=== Airplane Management System ===\n");
        printf("1. Add Flight\n");
        printf("2. View All Flights\n");
        printf("3. Search Flight\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < MAX) {
                printf("Enter Flight Number: ");
                scanf("%d", &flightNumber[count]);

                printf("Enter Destination Code (1=Dubai, 2=Karachi, 3=London): ");
                scanf("%d", &destinationCode[count]);

                printf("Enter Departure Time (like 900 or 1430): ");
                scanf("%d", &departureTime[count]);

                count++;
                printf("Flight added successfully!\n");
            } 
            else {
                printf("Flight list is full!\n");
            }
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("No flights available.\n");
            } 
            else {
                printf("\n--- All Flights ---\n");
                for (int i = 0; i < count; i++) {
                    printf("Flight %d: %d | Destination=%d | Time=%d\n",
                           i + 1,
                           flightNumber[i],
                           destinationCode[i],
                           departureTime[i]);
                }
            }
        }

        else if (choice == 3) {
            int searchNum, found = 0;
            printf("Enter Flight Number to Search: ");
            scanf("%d", &searchNum);

            for (int i = 0; i < count; i++) {
                if (flightNumber[i] == searchNum) {
                    printf("\nFlight Found!\n");
                    printf("Flight Number: %d\n", flightNumber[i]);
                    printf("Destination Code: %d\n", destinationCode[i]);
                    printf("Departure Time: %d\n", departureTime[i]);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Flight not found.\n");
            }
        }

        else if (choice == 4) {
            printf("Goodbye!\n");
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
