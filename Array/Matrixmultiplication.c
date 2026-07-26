#include<stdio.h>

int main(){
    int row1,col1,row2,col2;

    printf("Enter Row And Column Of Matrix A: ");
    scanf("%d,%d", &row1,&col1); 
    
    printf("Enter Row And Column Of Matrix B: ");
    scanf("%d,%d", &row2,&col2); 
    
    int A[row1][col1];
    int B[row2][col2];
    int result[row1][col2];

    if(col1!=row2){
        printf("Matrix Multiplication Not Possible!!");
        return 0;
    }

    printf("Enter Element Of Matrix A: ");
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            scanf("%d",A[i][j]);
        }
    }

    printf("Enter Element Of Matrix B: ");
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            scanf("%d",B[i][j]);
        }
    }
    return 0;
}