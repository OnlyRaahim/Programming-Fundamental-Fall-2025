#include<stdio.h>

void registervotes(int *A,int *B,int voters){

    for(int i=1;i<=voters;i++){

        int choice;
        printf("Voter Number %d\n",i);
        printf("1. Candidate A\n");
        printf("2. Candidate B\n");
        printf("Enter Choice:\n");
        scanf("%d",&choice);

        if(choice==1){
            (*A)++;
        }
        
        else if(choice==2){
            (*B)++;
        }

        else{
            printf("Inavlid Choice!!\n");
            return 0;
        }
    }
}

void countvotes(int A,int B){
    printf("Total Votes Of Candidate A Is: %d",A);
    printf("Total Votes Of Candidate B Is: %d",B);
}