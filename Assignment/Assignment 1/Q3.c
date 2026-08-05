#include<stdio.h>

int main(){

    float temperature[30],sum=0,average,highesttemp,lowesttemp;
    int fevercount=0;
    
    for(int i=0; i<30; i++)
    {    
        printf("Enter Temperature Of Patient %d: ",i+1);
        scanf("%f",&temperature[i]);
        sum+=temperature[i];

        if(i==0){
            highesttemp=temperature[i];
            lowesttemp=temperature[i];
        }

        else{
            if(temperature[i]>highesttemp){
                highesttemp=temperature[i];
            }

            if(temperature[i]<lowesttemp){
                lowesttemp=temperature[i];
            }
        }    
            if(temperature[i]>100){
            fevercount++;
            }

    }

    
    average=sum/30;

    printf("\nHighest Temperature Is %.2fF.\n",highesttemp);
    printf("Lowest Temperature Is %.2fF.\n",lowesttemp);
    printf("Average Temperature Is %.2fF.\n",average);
    printf("Patients Having Fever Greater Than 100 Degree Farenhite Is %d.\n", fevercount);


    

    return 0;
}