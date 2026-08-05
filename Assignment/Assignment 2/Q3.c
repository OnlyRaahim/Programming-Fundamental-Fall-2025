#include <stdio.h>

int main()
{
    float distance, cgpa, income;
    int disability;

    printf("Enter Distance from Home (km): ");
    scanf("%f", &distance);

    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter Family Income: ");
    scanf("%f", &income);

    printf("Disability Status (1 = Yes, 0 = No): ");
    scanf("%d", &disability);

    if (disability == 1)
    {
        printf("\nHighest Priority for Hostel Allocation.\n");
    }
    else
    {
        if (distance > 50)
        {
            if (cgpa >= 3.5)
            {
                if (income <= 50000)
                {
                    printf("\nHigh Priority for Hostel Allocation.\n");
                }
                else
                {
                    printf("\nMedium Priority for Hostel Allocation.\n");
                }
            }
            else
            {
                printf("\nLow Priority for Hostel Allocation.\n");
            }
        }
        else
        {
            printf("\nNot Eligible for Hostel Allocation.\n");
        }
    }

    return 0;
}