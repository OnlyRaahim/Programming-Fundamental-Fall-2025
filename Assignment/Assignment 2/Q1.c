#include<stdio.h>

struct medicine{
    int id;
    char name[30];
    float price;
    int quantity;
    char expiry[20];
    int expired;


};

int main(){
    struct medicine med [3];
    float totalvalue=0;

    for(int i=0;i<3; i++){

        printf("\nEnter Medicine %d Deatil:\n",i+1);
        
        printf("Medicine ID:");
        scanf("%d",&med[i].id);

        printf("Medicine Name:");
        scanf("%s",med[i].name);

        printf("Medicine Expiry Date(DD/MM/YYYY):");
        scanf("%s",med[i].expiry);

        printf("Medicine Price:");
        scanf("%f",&med[i].price);

        printf("Medicine Quantity:");
        scanf("%d",&med[i].quantity);

        printf("Medicine Expired(1 = yes and 0 = No):");
        scanf("%d",&med[i].expired);

        totalvalue+=med[i].quantity*med[i].price;
    }


    printf("\nDetails Of Expired Medicine!!\n");
    for(int i=0; i<3; i++){
    if(med[i].expired==1){
            printf("%s\n",med[i].name);
            printf("%.2f\n",med[i].price);
            printf("%d\n",med[i].quantity);
        }
    }

    printf("\nMedicine which have stock less than 10!!");
    for(int i=0; i<3; i++){
    if(med[i].quantity<10){
            printf("%s\n",med[i].name);
            printf("%.2f\n",med[i].price);
            printf("%d\n",med[i].quantity);
        }
    }

    printf("\nTotal Value Of Inventory Is %f\n",totalvalue);

    return 0;

}