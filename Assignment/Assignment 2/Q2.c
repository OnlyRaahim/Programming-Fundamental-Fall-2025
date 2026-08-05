#include <stdio.h>

struct Room
{
    int roomNo;
    char type[20];
    float price;
    int available;   
};

int main()
{
    struct Room room[3];
    int choice, number;

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter Details of Room %d\n", i + 1);

        printf("Room Number: ");
        scanf("%d", &room[i].roomNo);

        printf("Room Type: ");
        scanf("%s", room[i].type);

        printf("Room Price: ");
        scanf("%f", &room[i].price);

        printf("Availability (1 = Available, 0 = Booked): ");
        scanf("%d", &room[i].available);
    }

    do
    {
        printf("\n===== HOTEL MENU =====\n");
        printf("1. Book Room\n");
        printf("2. Cancel Booking\n");
        printf("3. Display Available Rooms\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Room Number to Book: ");
            scanf("%d", &number);

            for (int i = 0; i < 3; i++)
            {
                if (room[i].roomNo == number)
                {
                    if (room[i].available == 1)
                    {
                        room[i].available = 0;
                        printf("Room Booked Successfully!\n");
                    }
                    else
                    {
                        printf("Room is Already Booked.\n");
                    }
                }
            }
            break;

        case 2:
            printf("Enter Room Number to Cancel Booking: ");
            scanf("%d", &number);

            for (int i = 0; i < 3; i++)
            {
                if (room[i].roomNo == number)
                {
                    room[i].available = 1;
                    printf("Booking Cancelled Successfully!\n");
                }
            }
            break;

        case 3:
            printf("\nAvailable Rooms:\n");

            for (int i = 0; i < 3; i++)
            {
                if (room[i].available == 1)
                {
                    printf("\nRoom Number: %d", room[i].roomNo);
                    printf("\nType: %s", room[i].type);
                    printf("\nPrice: %.2f\n", room[i].price);
                }
            }
            break;

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}