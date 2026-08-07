
#include <stdio.h>
#define MAX 50

void clearInputBuffer() {
    while (getchar() != '\n');
}

int flightNumber[MAX], destinationCode[MAX], departureTime[MAX];
int count=0;

int findFlight(int num){
    for(int i=0;i<count;i++)
        if(flightNumber[i]==num) return i;
    return -1;
}

void addFlight(){
    if(count>=MAX){ 
        printf("Flight list is full!\n"); 
        return; 
    }
    
    int num,dest,time;

    printf("Enter Flight Number: ");
    if (scanf("%d",&num) != 1) {
    printf("Invalid Flight Number!\n");
    clearInputBuffer();
    return;
    }

    if(findFlight(num)!=-1){ 
        printf("Flight number already exists!\n"); 
        return; 
    }

    printf("Enter Destination Code (1=Dubai,2=Karachi,3=London): ");
    if (scanf("%d",&dest) != 1) {
    printf("Invalid Destination!\n");
    clearInputBuffer();
    return;
    }

    if(dest<1||dest>3){ 
        printf("Invalid destination!\n"); 
        return; 
    }

    printf("Enter Departure Time (HHMM): ");
    if (scanf("%d",&time) != 1) {
    printf("Invalid Time!\n");
    clearInputBuffer();
    return;
    }

    if(time<0||time>2359){
        printf("Invalid time!\n"); 
        return; 
    }

    flightNumber[count]=num;
    destinationCode[count]=dest;
    departureTime[count]=time;
    count++;
    printf("Flight added successfully!\n");
}

void viewFlights(){
    if(count==0){ 
        printf("No flights available.\n"); 
        return; 
    }

    for(int i=0;i<count;i++){
        char *d=(destinationCode[i]==1)?"Dubai":(destinationCode[i]==2)?"Karachi":"London";
        printf("%d. Flight:%d  Destination:%s  Time:%04d\n",i+1,flightNumber[i],d,departureTime[i]);
    }
}

void searchFlight(){
    int num;
    printf("Enter Flight Number: ");
    if(scanf("%d",&num)!=1){
        printf("Invalid Flight Number!\n");
        clearInputBuffer();
        return 0;
    }

    int i=findFlight(num);
    if(i==-1){ 
        printf("Flight not found.\n"); 
        return; 
    }

    char *d=(destinationCode[i]==1)?"Dubai":(destinationCode[i]==2)?"Karachi":"London";
    printf("Flight:%d\nDestination:%s\nTime:%04d\n",flightNumber[i],d,departureTime[i]);
}

void updateFlight(){
    int num;
    printf("Enter Flight Number to update: ");
    if(scanf("%d",&num)!=1){
        printf("Invalid Flight Number!\n");
        clearInputBuffer();
        return;
    }

    int i=findFlight(num);
    if(i==-1){ 
        printf("Flight not found.\n"); 
        return; 
    }

    printf("Enter Destination Code (1=Dubai,2=Karachi,3=London):\n");
    if (scanf("%d",&destinationCode[i]) != 1) {
        printf("Invalid Destination!\n");
        clearInputBuffer();
    return;
        }

    if (destinationCode[i] < 1 || destinationCode[i] > 3) {
        printf("Invalid Destination!\n");
        return;
        }

    printf("Flight updated.\n");
}

void deleteFlight(){
    int num;

    printf("Enter Flight Number to delete: ");
    if (scanf("%d",&num) != 1) {
    printf("Invalid Flight Number!\n");
    clearInputBuffer();
    return;
    }

    int i=findFlight(num);
    if(i==-1){ 
        printf("Flight not found.\n"); 
        return; 
    }

    for(int j=i;j<count-1;j++){
        flightNumber[j]=flightNumber[j+1];
        destinationCode[j]=destinationCode[j+1];
        departureTime[j]=departureTime[j+1];
    }
    count--;
    printf("Flight deleted.\n");
}

int main(){
    int choice;
    while(1){
        printf("\n=== Airplane Management System ===\n");
        
        printf("1.Add Flight\n");
        printf("2.View Flights\n");
        printf("3.Search Flight\n");
        printf("4.Update Flight\n");
        printf("5.Delete Flight\n");
        printf("6.Exit\n");
        
        printf("Enter choice: ");
        if (scanf("%d",&choice) != 1) {
        printf("Invalid choice! Please enter a number from 1 to 6.\n");
        clearInputBuffer();
        continue;
        }
        
        switch(choice){
            case 1:addFlight();break;
            case 2:viewFlights();break;
            case 3:searchFlight();break;
            case 4:updateFlight();break;
            case 5:deleteFlight();break;
            case 6:printf("Goodbye!\n");return 0;
            default:printf("Invalid choice!\n");
        }
    }
}
