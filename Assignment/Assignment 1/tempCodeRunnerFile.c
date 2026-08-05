#include <stdio.h>

int main()
{
    float score[10], sum = 0, average;
    float highest, lowest;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter score of Judge %d: ", i + 1);
        scanf("%f", &score[i]);

        sum += score[i];

        if (i == 0)
        {
            highest = score[i];
            lowest = score[i];
        }
        else
        {
            if (score[i] > highest)
                highest = score[i];

            if (score[i] < lowest)
                lowest = score[i];
        }
    }

    
    sum = sum - highest - lowest;

    
    average = sum / 8;

    printf("\nHighest Score = %.2f", highest);
    printf("\nLowest Score = %.2f", lowest);
    printf("\nFinal Average = %.2f\n", average);

    return 0;
}