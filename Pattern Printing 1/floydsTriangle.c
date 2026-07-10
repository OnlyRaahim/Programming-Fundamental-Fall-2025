#include<stdio.h>

int main(){
    
    int n;
    int num = 1;
    
    printf("Enter Number: ");
    scanf("%d",&n);
     
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%4d ", num);  // make width 4 not neccessory
            num++;                // but it make triangle look good
        }
        printf("\n");
    }
    return 0;
}

