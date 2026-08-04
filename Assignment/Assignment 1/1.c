#include<stdio.h>

float calculatedailyRent(int days,float rentperday){
    return days * rentperday;
}

float calculatelateFine(int latedays,float fineperday){
    return latedays * fineperday;
}

float calculateInsuranceCharges(float insuranceRate, float dailyrent){
    return (insuranceRate/100)*dailyrent;
}

void generateInvoice(float dailyRent,float lateReturnfine,float insuranceCharges){
    float total=dailyRent+lateReturnfine+insuranceCharges;
    printf("\n---Invoice---\n");
    printf("Daily Rent Is: %.2f\n",dailyRent);
    printf("Late Return Fine Is: %.2f\n",lateReturnfine);
    printf("Insurance Charges Is: %.2f\n",insuranceCharges);
    printf("Total Bill is: %.2f\n",total);
}

int main(){
    int days,latedays;
    float rentperday,fineperday,insuranceRate;

    printf("Enter Rental Days: ");
    scanf("%d",&days);

    printf("Enter Rent Per Days: ");
    scanf("%f",&rentperday);

    printf("Enter Late Days: ");
    scanf("%d",&latedays);

    printf("Enter Fine Per Days: ");
    scanf("%f",&fineperday);
    
    printf("Enter Insurance Rate: ");
    scanf("%f",&insuranceRate);

    float dailyrent=calculatedailyRent(days,rentperday);
    float lateReturnfine=calculatelateFine(latedays,fineperday);
    float insuranceCharges=calculateInsuranceCharges(insuranceRate,rentperday);

    generateInvoice(dailyrent,lateReturnfine,insuranceCharges);

    return 0;


}