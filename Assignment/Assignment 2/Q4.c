#include <stdio.h>

int main()
{
    float temperature, bp, oxygen;

    printf("Enter Temperature (°F): ");
    scanf("%f", &temperature);

    printf("Enter Blood Pressure (Systolic): ");
    scanf("%f", &bp);

    printf("Enter Oxygen Level (%%): ");
    scanf("%f", &oxygen);

    if (oxygen < 90)
    {
        printf("\nResult: ICU\n");
    }
    else
    {
        if (temperature >= 104)
        {
            printf("\nResult: ICU\n");
        }
        else
        {
            if (temperature > 101 || bp < 90 || bp > 140 || oxygen < 95)
            {
                printf("\nResult: Admit\n");
            }
            else
            {
                if (temperature > 99 || (bp > 120 && bp <= 140))
                {
                    printf("\nResult: Observation Required\n");
                }
                else
                {
                    printf("\nResult: Healthy\n");
                }
            }
        }
    }

    return 0;
}