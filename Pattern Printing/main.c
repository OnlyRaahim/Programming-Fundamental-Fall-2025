#include<stdio.h>

int main(){
    
    int n,m;  // n= number of rows and m= number of columns

    printf("Enter Rows: ");
    scanf("%d",&n);

    printf("Enter Columns: ");
    scanf("%d",&m);
     
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// This is basic code for all pattern printing question we just 
// modify rows and columns according to the question