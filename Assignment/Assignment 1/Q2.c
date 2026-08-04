#include<stdio.h>

void registervotes(int *A,int *B,int voters){

    for(int i=1;i<=voters;i++){

        int choice;
        printf("\nVoter Number %d\n",i);
        printf("1. Candidate A\n");
        printf("2. Candidate B\n");
        printf("\nEnter Choice:\n");
        scanf("%d",&choice);

        if(choice==1){
            (*A)++;
        }
        
        else if(choice==2){
            (*B)++;
        }

        else{
            printf("\nInavlid Choice!!\n");
        }
    }
}

void countvotes(int A,int B){
    printf("\nTotal Votes Of Candidate A Is: %d\n",A);
    printf("Total Votes Of Candidate B Is: %d\n",B);
}

void calculatevotepercentage(int A,int B){
    int totalvotes=A+B;

    printf("\nCandidate A: %d\n",(A*100)/totalvotes);
    printf("Candidate B: %d\n",(B*100)/totalvotes);
    
}

void displaywinner(int A,int B){
    
    if (A>B){
        printf("\nA Is Winner\n");
    }
    
    else if(B>A){
        printf("\nB Is Winner\n");
    }

    else{
        printf("\nBoth Candidate Have Equal Vote\n");
    }
}

int main(){
    int candidateA=0,candidateB=0;
    int voters;

    printf("\nEnter No Of Voters: \n");
    scanf("%d",&voters);

    registervotes(&candidateA,&candidateB,voters);
    countvotes(candidateA,candidateB);
    calculatevotepercentage(candidateA,candidateB);
    displaywinner(candidateA,candidateB);

    return 0;

}