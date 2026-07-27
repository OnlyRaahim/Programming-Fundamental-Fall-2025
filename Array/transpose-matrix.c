#include<stdio.h>

int main(){
    int row,col;

    printf("Enter Row Of Matrix: ");
    scanf("%d", &row);
    
    printf("Enter column Of Matrix: ");
    scanf("%d", &col);
    
    int A[row][col];
    int transpose[col][row];

    printf("Enter Element Of Matrix  ");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            transpose[j][i]=A[i][j];
        }
    }

    printf("\nBefore Transpose\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",A[i][j]);
        }

        printf("\n");
    }

    printf("\nTranspose Matrix:\n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}